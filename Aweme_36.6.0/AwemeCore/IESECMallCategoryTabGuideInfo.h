@class NSString, IESECMallCategoryTabGuideIconInfo;

@interface IESECMallCategoryTabGuideInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMallCategoryTabGuideIconInfo *guideIcon;
@property (nonatomic) BOOL hasForceInsert;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *items;
@property (copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSString *blockName;
@property (nonatomic) long long feedType;
@property (copy, nonatomic) NSString *feedID;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)guideIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
