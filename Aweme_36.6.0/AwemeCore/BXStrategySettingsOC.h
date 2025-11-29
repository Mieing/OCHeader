@class NSString, NSDictionary;

@interface BXStrategySettingsOC : NSObject

@property (nonatomic) int mUpdateInterval;
@property (nonatomic) BOOL mOpenRealTimeDecision;
@property (nonatomic) int mTryCount;
@property (copy, nonatomic) NSString *mAccessKey;
@property (copy, nonatomic) NSString *mSecretKey;
@property (nonatomic) int mByteBenchId;
@property (copy, nonatomic) NSDictionary *mClientInfoDic;

- (void).cxx_destruct;

@end
