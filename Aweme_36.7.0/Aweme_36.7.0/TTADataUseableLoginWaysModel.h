@class NSString, NSArray;

@interface TTADataUseableLoginWaysModel : NSObject

@property (nonatomic) BOOL hasEmail;
@property (nonatomic) BOOL hasMobile;
@property (nonatomic) BOOL hasOauth;
@property (nonatomic) BOOL hasPwd;
@property (nonatomic) BOOL isMostDevice;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *mobiel;
@property (copy, nonatomic) NSArray *oauthPlatforms;
@property (copy, nonatomic) NSString *token;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
