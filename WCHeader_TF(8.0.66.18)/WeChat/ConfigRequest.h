@class ChildMode, NSString, NSMutableArray, LbsLocationNew;

@interface ConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *configKeys;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSString *netType;
@property (retain, nonatomic) LbsLocationNew *location;
@property (retain, nonatomic) NSMutableArray *extParams;
@property (retain, nonatomic) ChildMode *childMode;
@property (nonatomic) unsigned int topStoryH5Version;
@property (retain, nonatomic) NSString *topStoryLiteAppVersion;

+ (void)initialize;

@end
