@class NSData;
@protocol EmoticonListCgiDelegate;

@interface EmoticonListCgi : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int requestEventID;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSData *boughtBuff;
@property (nonatomic) unsigned int reqType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long sessionId;
@property (weak, nonatomic) id<EmoticonListCgiDelegate> delegate;

- (id)init;
- (void)createRequest;
- (void)onGetBoughtItemList:(id)a0;
- (void)OnGetStoreEmoticonList:(id)a0 withReqType:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
