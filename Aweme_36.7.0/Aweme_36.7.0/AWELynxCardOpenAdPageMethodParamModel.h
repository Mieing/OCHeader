@class NSString, NSDictionary;

@interface AWELynxCardOpenAdPageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *wechatMpInfo;
@property (copy, nonatomic) NSDictionary *logData;
@property (copy, nonatomic) NSString *webTitle;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
