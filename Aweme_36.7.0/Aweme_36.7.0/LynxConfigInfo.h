@class NSString, NSSet, NSData;

@interface LynxConfigInfo : NSObject

@property (readonly, retain, nonatomic) NSString *pageVersion;
@property (readonly, retain, nonatomic) NSString *pageType;
@property (readonly, retain, nonatomic) NSString *cliVersion;
@property (readonly, retain, nonatomic) NSString *customData;
@property (readonly, retain, nonatomic) NSString *templateUrl;
@property (readonly, retain, nonatomic) NSString *targetSdkVersion;
@property (readonly, retain, nonatomic) NSString *lepusVersion;
@property (readonly, nonatomic) long long threadStrategyForRendering;
@property (readonly, nonatomic) BOOL enableLepusNG;
@property (readonly, retain, nonatomic) NSString *radonMode;
@property (readonly, copy, nonatomic) NSString *reactVersion;
@property (readonly, retain, nonatomic) NSSet *registeredComponent;
@property (readonly, retain, nonatomic) NSData *json;
@property (readonly, nonatomic) BOOL cssAlignWithLegacyW3c;
@property (readonly, nonatomic) BOOL enableCSSParser;

- (id)lnxThreadStrategyForRenderToString:(long long)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;

@end
