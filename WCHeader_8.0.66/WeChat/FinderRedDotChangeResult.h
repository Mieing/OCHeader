@class NSString, NSMutableArray;

@interface FinderRedDotChangeResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tipsUuid;
@property (retain, nonatomic) NSString *lastTipsUuid;
@property (retain, nonatomic) NSMutableArray *addPath;
@property (retain, nonatomic) NSMutableArray *removePath;

+ (void)initialize;

@end
