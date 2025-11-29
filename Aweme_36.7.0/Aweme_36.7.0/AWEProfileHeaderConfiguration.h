@class NSString, AWEUserModel, AWEProfileContext;

@interface AWEProfileHeaderConfiguration : NSObject

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) long long profileType;
@property (nonatomic) BOOL fromHomePage;
@property (retain, nonatomic) AWEProfileContext *context;
@property (retain, nonatomic) AWEUserModel *userModel;

- (void).cxx_destruct;

@end
