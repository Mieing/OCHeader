@class NSString, TIMXPBNGetRecentConvAndMsgRequestBody;

@interface TIMXPBNGetUserMessageRequestBody : GPBMessage

@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long cmdIndex;
@property (nonatomic) BOOL hasCmdIndex;
@property (nonatomic) long long strangerVersion;
@property (nonatomic) BOOL hasStrangerVersion;
@property (nonatomic) long long readVersion;
@property (nonatomic) BOOL hasReadVersion;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) long long consultVersion;
@property (nonatomic) BOOL hasConsultVersion;
@property (nonatomic) long long notifyVersion;
@property (nonatomic) BOOL hasNotifyVersion;
@property (retain, nonatomic) TIMXPBNGetRecentConvAndMsgRequestBody *getRecentConvAndMsg;
@property (nonatomic) BOOL hasGetRecentConvAndMsg;
@property (nonatomic) long long threadVersion;
@property (nonatomic) BOOL hasThreadVersion;
@property (nonatomic) long long threadReadVersion;
@property (nonatomic) BOOL hasThreadReadVersion;
@property (nonatomic) BOOL needRecentConvReadInfo;
@property (nonatomic) BOOL hasNeedRecentConvReadInfo;
@property (nonatomic) long long cmdMessageChainV2Index;
@property (nonatomic) BOOL hasCmdMessageChainV2Index;

+ (id)descriptor;

- (void)setSource:(id)a0;
- (void)setNeedRecentConvReadInfo:(BOOL)a0;
- (void)setCmdMessageChainV2Index:(long long)a0;
- (void)setThreadReadVersion:(long long)a0;
- (void)setThreadVersion:(long long)a0;
- (void)setConsultVersion:(long long)a0;
- (void)setReadVersion:(long long)a0;
- (void)setStrangerVersion:(long long)a0;
- (void)setCmdIndex:(long long)a0;
- (void)setGetRecentConvAndMsg:(id)a0;

@end
