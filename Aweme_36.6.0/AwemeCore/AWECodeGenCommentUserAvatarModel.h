@class NSArray, NSString;

@interface AWECodeGenCommentUserAvatarModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *avatarSchemaArray;
@property (copy, nonatomic) NSString *urlCommonData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
