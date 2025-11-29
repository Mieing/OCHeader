@class NSString, AppItem, NSMutableArray;

@interface GameIndex4FeedsBlock_NoPlayGameTemplate : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *picUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) AppItem *appItem;
@property (retain, nonatomic) NSMutableArray *friendList;
@property (retain, nonatomic) NSString *friendDesc;

+ (void)initialize;

@end
