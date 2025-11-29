@interface VQMProfileInfoSystemauth : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timestampRequestCamera;
@property (nonatomic) unsigned long long timestampResponseCamera;
@property (nonatomic) int isAuthorizedCamera;
@property (nonatomic) unsigned long long timestampRequestMicrphone;
@property (nonatomic) unsigned long long timestampResponseMicrphone;
@property (nonatomic) int isAuthorizedMicrphone;

+ (void)initialize;

@end
