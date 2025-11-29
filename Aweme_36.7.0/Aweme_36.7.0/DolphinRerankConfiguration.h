@class NSString;

@interface DolphinRerankConfiguration : NSObject

@property (copy, nonatomic) NSString *pitayaBusinessName;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long latestRecordCount;
@property (nonatomic) long long rerankMinRunInterval;
@property (nonatomic) long long autoRerankRunInterval;
@property (nonatomic) BOOL pauseAutoRerankWhenBackground;
@property (copy, nonatomic) NSString *clientVersion;
@property (nonatomic) BOOL useStrictMode;
@property (nonatomic) long long modelMatchOption;
@property (nonatomic) long long cacheClearMode;
@property (nonatomic) long long cacheMaxCount;
@property (nonatomic) BOOL enableRegisterBridge;
@property (nonatomic) BOOL disableFeedStatusCheck;
@property (nonatomic) BOOL ignorePtyRetListNotRerank;

- (void).cxx_destruct;
- (id)init;

@end
