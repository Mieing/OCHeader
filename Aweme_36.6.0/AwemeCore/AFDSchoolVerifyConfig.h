@class NSString, AWEAwemeModel;

@interface AFDSchoolVerifyConfig : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long triggerScene;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL hasMask;
@property (copy, nonatomic) NSString *schoolDetailSchoolID;
@property (copy, nonatomic) NSString *schoolDetailSchoolName;
@property (copy, nonatomic) id /* block */ didTapVerifySuccessSnackbar;

- (void).cxx_destruct;

@end
