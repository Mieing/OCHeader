@class NSString, UIImage, NSArray;

@interface AWETeenProfileEditViewModel : NSObject

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSArray *avatarURL;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *gender;
@property (retain, nonatomic) NSString *birthDate;
@property (retain, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *profileSignature;
@property (retain, nonatomic) NSString *avatarURI;
@property (nonatomic) long long genderType;
@property (nonatomic) long long birthdayHideLevel;
@property (nonatomic) BOOL useDefaultAvatar;
@property (nonatomic) BOOL useDefaultNickname;
@property (nonatomic) float completionPercent;

- (void)refreshWithUser:(id)a0;
- (void).cxx_destruct;

@end
