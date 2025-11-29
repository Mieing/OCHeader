@class NSString, NSDictionary;

@interface TTAGetThridPartUserInfoModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSDictionary *extraInfo;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
