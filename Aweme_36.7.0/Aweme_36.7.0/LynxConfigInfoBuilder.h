@class NSString, NSSet;

@interface LynxConfigInfoBuilder : NSObject

@property (retain, nonatomic) NSString *pageVersion;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSString *cliVersion;
@property (retain, nonatomic) NSString *customData;
@property (retain, nonatomic) NSString *templateUrl;
@property (retain, nonatomic) NSString *targetSdkVersion;
@property (retain, nonatomic) NSString *lepusVersion;
@property (nonatomic) long long threadStrategyForRendering;
@property (nonatomic) BOOL enableLepusNG;
@property (retain, nonatomic) NSString *radonMode;
@property (retain, nonatomic) NSSet *registeredComponent;
@property (nonatomic) BOOL cssAlignWithLegacyW3c;
@property (nonatomic) BOOL enableCSSParser;
@property (copy, nonatomic) NSString *reactVersion;

- (void).cxx_destruct;
- (id)build;
- (id)init;

@end
