@interface FinderCheckPrefetchResponse_CheckResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectid;
@property (nonatomic) unsigned int code;
@property (nonatomic) BOOL hitInPlaying;
@property (nonatomic) BOOL hitAllScene;

+ (void)initialize;

@end
