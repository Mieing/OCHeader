@class BrandConvMassSendStorage, NSString;

@interface BrandCommonService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (nonatomic) unsigned int massSendHideFlag;
@property (retain, nonatomic) BrandConvMassSendStorage *massSendStorage;
@property (nonatomic) BOOL isHideMassSendEnabled;
@property (nonatomic) BOOL isHideMassSendOnceEnabled;
@property (readonly, nonatomic) unsigned int massSendDBRecordStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)fetchCommonStrategy;
- (id)getBrandConvMsgFirstMsgInfo:(id)a0 fromCreateTime:(unsigned int)a1;
- (id)getBrandConvMsgLocalIds:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 toCreateTime:(unsigned int)a3 limit:(int)a4 leftCount:(unsigned int *)a5;
- (id)getDownMsgLocalIds:(id)a0 fromID:(unsigned int)a1 fromCreateTime:(unsigned int)a2 limit:(int)a3 leftCount:(unsigned int *)a4;
- (id)hideMassSendTypes;
- (BOOL)isServerHideBizMassSend;
- (BOOL)isServerHideServiceMassSend;
- (BOOL)isServerHideStockMassSend;
- (BOOL)isServerHideIncrementMassSend;
- (BOOL)isServerHideAllMassSend;
- (BOOL)isServerHideNotAllMassSend;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)chatRoomItem;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (BOOL)isSubscriptionBrand:(id)a0;
- (void).cxx_destruct;

@end
