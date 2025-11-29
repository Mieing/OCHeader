@class NSString;

@interface PreviewRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileFormat;
@property (retain, nonatomic) NSString *subType;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) int type;

+ (void)initialize;

@end
