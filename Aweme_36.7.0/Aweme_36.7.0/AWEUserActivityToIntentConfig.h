@class AWEOpenPageIntentConfig, AWEDisableBgPlayMediaIntentConfig, NSString;

@interface AWEUserActivityToIntentConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEOpenPageIntentConfig *openPageConfig;
@property (retain, nonatomic) AWEDisableBgPlayMediaIntentConfig *disableBgPlayMediaConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openPageConfigJSONTransformer;
+ (id)disableBgPlayMediaConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
