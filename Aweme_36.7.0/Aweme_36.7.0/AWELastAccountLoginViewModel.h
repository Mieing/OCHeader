@class AWELoginButtonTagModel, NSString, NSArray, DYLastLoginUserModel;

@interface AWELastAccountLoginViewModel : NSObject

@property (copy, nonatomic) NSString *loginTitle;
@property (copy, nonatomic) NSString *loginButtonTitle;
@property (copy, nonatomic) NSArray *userModels;
@property (retain, nonatomic) DYLastLoginUserModel *userModel;
@property (nonatomic) long long protocolOffset;
@property (retain, nonatomic) AWELoginButtonTagModel *tagModel;

- (void).cxx_destruct;

@end
