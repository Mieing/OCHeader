@class NSString, LSIMObserverHash, NSMutableDictionary;

@interface LSIMCardDataRequestManager : NSObject

@property (nonatomic) long long detailIMType;
@property (copy, nonatomic) NSString *conGroupID;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL isApplet;
@property (copy, nonatomic) NSString *imAccountID;
@property (retain, nonatomic) LSIMObserverHash *observerHash;
@property (retain, nonatomic) NSMutableDictionary *isRequestingDict;
@property (retain, nonatomic) NSMutableDictionary *waitingRequestDict;
@property (retain, nonatomic) NSMutableDictionary *throttleDict;
@property (retain, nonatomic) NSMutableDictionary *collectingCardIDsDict;
@property (retain, nonatomic) NSMutableDictionary *collectingCardAppletExtDict;
@property (retain, nonatomic) NSMutableDictionary *requestingCardIDsDict;
@property (retain, nonatomic) NSMutableDictionary *requestingCardAppletExtDict;
@property (retain, nonatomic) NSMutableDictionary *cacheCardDataDict;

- (BOOL)needCommonParams;
- (BOOL)needCommonParams;
- (id)fetchCardsRequestMethodWithCardType:(unsigned long long)a0;
- (id)fetchCardsRequestMethodWithCardType:(unsigned long long)a0;
- (id)fetchCardsValueWithCardType:(unsigned long long)a0 requestingCardIDs:(id)a1;
- (id)fetchCardsValueWithCardType:(unsigned long long)a0 requestingCardIDs:(id)a1;
- (id)getCardsData:(id)a0 cardType:(unsigned long long)a1;
- (id)getCardsData:(id)a0 cardType:(unsigned long long)a1;
- (id)requestURLWithCardType:(unsigned long long)a0;
- (id)requestURLWithCardType:(unsigned long long)a0;
- (void)requestWithCardType:(unsigned long long)a0 cardID:(id)a1 appletExtDict:(id)a2 observer:(id)a3;
- (void)collectingCardIDsDictAddCardID:(id)a0 cardType:(unsigned long long)a1;
- (id)throttleWithCardType:(unsigned long long)a0;
- (id)fetchCardsKeyWithCardType:(unsigned long long)a0;
- (id)additionalFetchParamsWithCardType:(unsigned long long)a0 isApplet:(BOOL)a1;
- (BOOL)checkCallThrottleIfNeedWithCardType:(unsigned long long)a0;
- (void)collectingCardIDsDictAddCardIDs:(id)a0 cardType:(unsigned long long)a1;
- (void)notifyObserverWithCardType:(unsigned long long)a0 success:(BOOL)a1 cardData:(id)a2;
- (void)requestCardDataWithCardType:(unsigned long long)a0;
- (id)initWithChatDetailType:(long long)a0 conGroupID:(id)a1 conversationID:(id)a2 isApplet:(BOOL)a3 imAccountID:(id)a4;
- (void)requestWithCardType:(unsigned long long)a0 cardID:(id)a1 observer:(id)a2;
- (void).cxx_destruct;
- (id)hostURL;
- (id)hostURL;

@end
