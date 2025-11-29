@class NSArray, NSString;

@interface APCDTOThemeConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *templateIds;
@property (copy, nonatomic) NSString *applyTemplateId;
@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *categoryId;
@property (copy, nonatomic) NSString *generalPostReason;
@property (copy, nonatomic) NSString *generalPostLevel;
@property (copy, nonatomic) NSString *mvId;
@property (copy, nonatomic) NSString *mvType;
@property (copy, nonatomic) NSString *postCoverTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
