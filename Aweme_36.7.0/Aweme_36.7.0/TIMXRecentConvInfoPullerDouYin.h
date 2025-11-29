@class NSString, TIMXSDKInstance;
@protocol TIMXMessageStoreProtocol, TIMXKVStorageProtocol;

@interface TIMXRecentConvInfoPullerDouYin : NSObject {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<TIMXMessageStoreProtocol> db;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) NSString *versionKey;
@property (nonatomic) BOOL isPulling;
@property (readonly, nonatomic) long long version;

- (BOOL)hasInited;
- (id)initWithRootObject:(id)a0 inbox:(int)a1 userID:(long long)a2;
- (BOOL)shouldDropNotifyWithVersion:(long long)a0;
- (BOOL)isContinuesWithPreVersion:(long long)a0;
- (void)updateVersion:(long long)a0 forced:(BOOL)a1;
- (void)pullRecentConversationInfosSource:(id)a0;
- (void)pullRecentConversationInfosIfNeedWithMaxVersion:(long long)a0 source:(id)a1;
- (BOOL)p_checkUserValidation;
- (void).cxx_destruct;

@end
