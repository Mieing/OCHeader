@class NSString;

@interface RecycleCardReport : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) unsigned long long clientmsgid;
@property (nonatomic) unsigned int satus;
@property (retain, nonatomic) NSString *reportData;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
