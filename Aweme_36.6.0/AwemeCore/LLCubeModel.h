@class NSString, NSDictionary, IESLLLiveBridgeRegister, LLCubeConfig;

@interface LLCubeModel : NSObject

@property (retain, nonatomic) IESLLLiveBridgeRegister *liveLifeBridgeRegister;
@property (nonatomic) double presetWidth;
@property (nonatomic) BOOL isSafeUpdate;
@property (copy, nonatomic) NSString *bizCode;
@property (retain, nonatomic) NSDictionary *btmParams;
@property (retain, nonatomic) NSString *lynxUrl;
@property (retain, nonatomic) id bizData;
@property (retain, nonatomic) NSDictionary *bizGlobalProps;
@property (nonatomic) long long height;
@property (nonatomic) long long preloadType;
@property (retain, nonatomic) LLCubeConfig *config;
@property (copy, nonatomic) NSString *uniqueTag;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *lynxUrlBeforeIntercept;
@property (nonatomic) BOOL enableUIOperationQueue;

- (id)initWithLynxModel:(id)a0;
- (void)updateConfigWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
