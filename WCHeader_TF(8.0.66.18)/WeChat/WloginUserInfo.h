@class NSString;

@interface WloginUserInfo : NSObject <NSCoding>

@property unsigned int dwUserUin;
@property (retain) NSString *sUserMainAccount;
@property unsigned short wFaceId;
@property unsigned char cAge;
@property unsigned char cGender;
@property (retain) NSString *sNickName;

- (id)description;
- (id)userinfo;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
