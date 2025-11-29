@class NSString;

@interface AFDSugUserModel : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *aliasName;
@property (copy, nonatomic) NSString *aliasNamePhoneticSpelling;
@property (copy, nonatomic) NSString *nickNamePhoneticSpelling;
@property (copy, nonatomic) NSString *aliasNameInitialsPhoneticSpelling;
@property (copy, nonatomic) NSString *nickNameInitialsPhoneticSpelling;

- (void).cxx_destruct;

@end
