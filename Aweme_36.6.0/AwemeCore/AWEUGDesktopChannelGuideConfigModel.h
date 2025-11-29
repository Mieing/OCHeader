@class NSDictionary, NSString, AWEUGDesktopChannelGuideUIConfigModel;

@interface AWEUGDesktopChannelGuideConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUGDesktopChannelGuideUIConfigModel *UIConfig;
@property (copy, nonatomic) NSDictionary *installConfig;
@property (copy, nonatomic) NSString *eventExtraString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
