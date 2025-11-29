@class NSString, NSArray, AWEHomePageRemoteGuideTipsModel, AWEHomePageRemoteCommonImageModel;

@interface AWEHomePageRemoteModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long panelType;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *panelIconModel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *modules;
@property (retain, nonatomic) AWEHomePageRemoteGuideTipsModel *guideTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
