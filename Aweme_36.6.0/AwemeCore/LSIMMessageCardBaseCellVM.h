@class NSDictionary, NSString;

@interface LSIMMessageCardBaseCellVM : LSIMChatDetailBaseCellVM <LSIMRequestCardDataObserver>

@property (copy, nonatomic) NSDictionary *cardModel;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSDictionary *cardBody;
@property (nonatomic) BOOL cardSendSucceed;
@property (nonatomic) BOOL cardSending;
@property (nonatomic) BOOL requestSucceed;
@property (nonatomic) BOOL requestingNewData;
@property (nonatomic) BOOL hasFetchedCardBody;
@property (copy, nonatomic) NSDictionary *fetchedCardBody;
@property (readonly, nonatomic) BOOL hasSendMethod;
@property (readonly, nonatomic) BOOL needRequestNewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultTrackerParams;
- (void)cardDataRequestSuccess:(BOOL)a0 cardsDataDict:(id)a1;
- (void)resendIMMessage;
- (void)handleMessage;
- (void)sendIMMessage;
- (void)techTrackCardSend;
- (void)techTrackCardSendResult:(BOOL)a0 startTime:(unsigned long long)a1 errorCode:(long long)a2;
- (void)updateFetchedCardBodyToCurrent:(id)a0;
- (void)fetchCardData;
- (unsigned long long)fetchCardType;
- (id)fetchCardID;
- (id)fetchAppletExtParams;
- (long long)cardSendSource;
- (id)techCardDefaultTrackParams;
- (void)techTrackCardClick:(BOOL)a0;
- (void).cxx_destruct;
- (void)sendMessageIfNeeded;

@end
