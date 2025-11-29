@class NSString, UIImage;

@interface AWEShareTokenAlertModel : NSObject

@property (copy, nonatomic) NSString *tokenText;
@property (copy, nonatomic) NSString *shareType;
@property (retain, nonatomic) UIImage *topImage;
@property (nonatomic) unsigned long long orientation;

- (void).cxx_destruct;

@end
