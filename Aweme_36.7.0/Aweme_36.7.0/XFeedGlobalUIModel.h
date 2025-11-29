@class NSString, XFeedGradientBgModel;

@interface XFeedGlobalUIModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) XFeedGradientBgModel *gradientBg;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gradientBgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
