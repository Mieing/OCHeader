@class NSString, UIImage;

@interface AWESearchUserAvatarComponentModel : AWESearchComponentBasicModel

@property (copy, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) UIImage *avatarLocalImage;
@property (copy, nonatomic) NSString *identificationUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *time;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
