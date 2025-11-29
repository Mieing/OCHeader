@class NSArray, NSString;

@interface APCDTOPermission : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *excludeUserList;
@property (copy, nonatomic) NSArray *partSeeUserList;
@property (nonatomic) BOOL allowRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeJSONTransformer;
+ (id)excludeUserListJSONTransformer;
+ (id)partSeeUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
