@class HTSLiveUser, NSString, NSDictionary, HTSLiveUserPreviewConfig;

@interface IESLiveReportConfig : NSObject

@property (nonatomic) unsigned long long reportSource;
@property (retain, nonatomic) NSString *requestPage;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (retain, nonatomic) HTSLiveUserPreviewConfig *config;
@property (nonatomic) unsigned long long myRole;
@property (nonatomic) unsigned long long itsRole;
@property (retain, nonatomic) NSDictionary *reportUrlExtraParams;

- (void).cxx_destruct;

@end
