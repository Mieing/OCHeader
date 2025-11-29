@class NSString, AWEUserModel, AWEAwemeModel;

@interface AFDPrivacyMapContext : NSObject

@property (nonatomic) BOOL disableSecretRelationCheckWhenFollowed;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long filterResult;

- (void).cxx_destruct;

@end
