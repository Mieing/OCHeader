@class AWELoginButtonTagModel, NSString, NSArray, AWEUserContext;

@interface AWELastAccountLoginViewFactoryConfig : NSObject

@property (copy, nonatomic) NSString *loginTitle;
@property (copy, nonatomic) NSString *loginButtonTitle;
@property (retain, nonatomic) AWEUserContext *context;
@property (copy, nonatomic) NSArray *userModel;
@property (nonatomic) long long protocolOffset;
@property (retain, nonatomic) AWELoginButtonTagModel *tagModel;

- (void).cxx_destruct;

@end
