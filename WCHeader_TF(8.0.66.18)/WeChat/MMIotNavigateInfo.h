@class NSString;

@interface MMIotNavigateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *navigateArg;
@property (retain, nonatomic) NSString *mpAppid;
@property (retain, nonatomic) NSString *sendMsgPagePath;
@property (nonatomic) unsigned int envVersion;

+ (void)initialize;

@end
