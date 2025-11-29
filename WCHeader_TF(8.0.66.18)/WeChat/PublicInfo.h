@interface PublicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL hbIsEmpty;
@property (nonatomic) BOOL selfRecvHb;

+ (void)initialize;

@end
