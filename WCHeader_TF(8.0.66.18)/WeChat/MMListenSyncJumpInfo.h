@class NSString, MMListenCategoryItem, MMListenDiscoverItem;

@interface MMListenSyncJumpInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenDiscoverItem *discoverItem;
@property (retain, nonatomic) NSString *discoverLineId;

+ (void)initialize;

@end
