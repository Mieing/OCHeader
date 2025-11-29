@class NSString;

@interface LiteAppOpenInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *minVersion;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) float heightPercent;
@property (nonatomic) BOOL transparent;
@property (retain, nonatomic) NSString *enterAnimation;
@property (retain, nonatomic) NSString *exitAnimation;
@property (retain, nonatomic) NSString *extraData;

+ (void)initialize;

@end
