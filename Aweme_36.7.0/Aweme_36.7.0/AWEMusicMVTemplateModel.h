@class NSArray, AWEMusicMVTemplateRspBase, NSString;

@interface AWEMusicMVTemplateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templatesInfo;
@property (copy, nonatomic) NSArray *musicEditsInfo;
@property (retain, nonatomic) AWEMusicMVTemplateRspBase *baseInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templatesInfoJSONTransformer;
+ (id)musicEditsInfoJSONTransformer;
+ (id)baseInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
