@class NSString;

@interface AWEBatManBusinessModel : NSObject

@property (copy, nonatomic) NSString *batManId;
@property (copy, nonatomic) NSString *batManName;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *authorId;
@property (nonatomic) int orientationType;
@property (nonatomic) int authType;

- (BOOL)checkAuthParamValid;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
