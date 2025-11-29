@class NSNumber, NSString;

@interface AWEChallengWechatMiniAppInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *wechatSkipType;
@property (retain, nonatomic) NSNumber *wechatOpenMethod;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *linkText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
