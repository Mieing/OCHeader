@class NSString;

@interface JSJumpLiteappInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *enterType;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) double heightPercent;
@property (nonatomic) BOOL isTransparent;
@property (retain, nonatomic) NSString *minVersion;

+ (void)initialize;

@end
