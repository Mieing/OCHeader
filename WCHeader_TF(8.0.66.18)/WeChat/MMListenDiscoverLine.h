@class NSString, MMListenDiscoverRefreshStrategy, NSMutableArray, MMListenDiscoverItem;

@interface MMListenDiscoverLine : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *discoverLineId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) MMListenDiscoverItem *parentItem;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int recommendType;
@property (nonatomic) unsigned int showNum;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasCreatePlaylistButton;
@property (retain, nonatomic) MMListenDiscoverRefreshStrategy *refreshStrategy;

+ (void)initialize;

@end
