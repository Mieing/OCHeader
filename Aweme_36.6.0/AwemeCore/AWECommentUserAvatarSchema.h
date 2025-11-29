@class NSArray, NSDictionary, NSString;

@interface AWECommentUserAvatarSchema : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *avatarSchemaArray;
@property (copy, nonatomic) NSDictionary *urlCommonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlCommonDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
