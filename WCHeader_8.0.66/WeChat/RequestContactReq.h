@interface RequestContactReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) BOOL disableConfirm;

+ (void)initialize;

@end
