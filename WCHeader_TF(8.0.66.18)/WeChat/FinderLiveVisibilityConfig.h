@class NSMutableArray;

@interface FinderLiveVisibilityConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int maxVisibleChatroomCount;
@property (nonatomic) unsigned int maxVisibleUserCount;
@property (retain, nonatomic) NSMutableArray *visibilityFileList;

+ (void)initialize;

@end
