@class NSString;

@interface AWECommentLikeInfoPermissionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *buttonDescSub;
@property (copy, nonatomic) NSString *buttonOption1;
@property (copy, nonatomic) NSString *buttonOption2;
@property (copy, nonatomic) NSString *buttonOption3;
@property (copy, nonatomic) NSString *buttonOption2SubDesc;
@property (copy, nonatomic) NSString *buttonOption3SubDesc2;
@property (copy, nonatomic) NSString *buttonOption3Toast2;
@property (copy, nonatomic) NSString *favoriteOnItemSettingTitle;
@property (copy, nonatomic) NSString *favoriteOnItemSettingText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
