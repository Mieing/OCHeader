@class NSString;

@interface AWESearchVideoCardAnchorPluginConfig : NSObject

@property (copy, nonatomic) NSString *anchorCardName;
@property (nonatomic) unsigned long long anchorComponentType;

+ (id)weakAnchorPluginMap;
+ (id)strongAnchorPluginMap;

- (id)initWithAnchorCardName:(id)a0 anchorComponentType:(unsigned long long)a1;
- (id)anchorPluginCls;
- (id)anchorPluginMap;
- (void).cxx_destruct;

@end
