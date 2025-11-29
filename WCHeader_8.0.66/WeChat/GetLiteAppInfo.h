@class NSString;

@interface GetLiteAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) BOOL checkSwitch;
@property (nonatomic) BOOL checkUpdate;
@property (nonatomic) BOOL syncCheckUpdate;
@property (retain, nonatomic) NSString *enterType;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) double heightPercent;
@property (nonatomic) unsigned int enableDragToCloseInHalfScreen;
@property (nonatomic) BOOL isTransparent;
@property (retain, nonatomic) NSString *minVersion;
@property (nonatomic) BOOL isRedirect;

+ (void)initialize;

@end
