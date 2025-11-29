@class NSString, NSArray, AWEUGInnerPushExtraModel;

@interface AWEUGInnerPushContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *singleScene;
@property (copy, nonatomic) NSArray *singleSceneList;
@property (nonatomic) BOOL openAllScene;
@property (retain, nonatomic) AWEUGInnerPushExtraModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extraModelJSONTransformer;
+ (id)extraModelFromJsonString:(id)a0;
+ (id)extraModelFromDictionary:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
