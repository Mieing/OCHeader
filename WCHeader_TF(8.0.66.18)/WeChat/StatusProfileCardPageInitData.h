@class NSString, NSMutableArray;

@interface StatusProfileCardPageInitData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) int cardDisplayScene;
@property (retain, nonatomic) NSMutableArray *statusInfos;
@property (retain, nonatomic) NSString *wxAlias;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *profileKey;
@property (nonatomic) double topPlaceholderHeightPx;
@property (nonatomic) BOOL enableShowStatus;

+ (void)initialize;

@end
