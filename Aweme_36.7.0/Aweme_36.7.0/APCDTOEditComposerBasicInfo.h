@class NSString;

@interface APCDTOEditComposerBasicInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isStory;
@property (copy, nonatomic) NSString *cover;
@property (nonatomic) BOOL notSaveDraft;
@property (nonatomic) long long editType;
@property (nonatomic) long long storyPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
