@class NSString, LynxTemplateBundle, AWESearchTemplateBundleInfo;

@interface AWESearchTemplateBundleTaskConfig : NSObject

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *resourceURL;
@property (retain, nonatomic) AWESearchTemplateBundleInfo *bundleInfo;
@property (nonatomic) BOOL isGlobalCache;
@property (retain, nonatomic) LynxTemplateBundle *templateBundle;

- (void).cxx_destruct;

@end
