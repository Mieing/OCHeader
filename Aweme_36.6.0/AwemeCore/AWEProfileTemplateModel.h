@class AWEUserModel, NSString, NSNumber, AWEVideoModel;

@interface AWEProfileTemplateModel : AWEBaseApiModel <AWEProfileTemplateModelProtocol>

@property (copy, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSNumber *materialCount;
@property (retain, nonatomic) NSNumber *usageUserCountInVC;
@property (retain, nonatomic) AWEVideoModel *video;
@property (copy, nonatomic) NSString *templateTitle;
@property (copy, nonatomic) NSString *templateDesc;
@property (retain, nonatomic) AWEUserModel *author;
@property (nonatomic) long long modelType;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *playingTemplateTips;
@property (nonatomic) long long freePlayingTemplate;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *serverJumpLvSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
