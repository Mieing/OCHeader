@class NSString;

@interface PackActivityInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int linkType;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSString *weAppUserName;
@property (retain, nonatomic) NSString *weAppPath;
@property (retain, nonatomic) NSString *h5;
@property (retain, nonatomic) NSString *buttonDesc;

+ (void)initialize;

@end
