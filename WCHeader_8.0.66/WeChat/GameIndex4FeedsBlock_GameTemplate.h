@class NSString, NSMutableArray, AppItem;

@interface GameIndex4FeedsBlock_GameTemplate : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSMutableArray *gameTagList;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *picJumpUrl;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) AppItem *appItem;

+ (void)initialize;

@end
