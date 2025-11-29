@class NSString, IESLLifeURLModel;

@interface IESLLStandardClassifyBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entityId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long bizScene;
@property (nonatomic) int appId;
@property (nonatomic) int relationType;
@property (nonatomic) long long itemId;
@property (nonatomic) long long standardBarId;
@property (copy, nonatomic) IESLLifeURLModel *iconURL;
@property (copy, nonatomic) NSString *appletSchema;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (copy, nonatomic) NSString *appSchema;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
