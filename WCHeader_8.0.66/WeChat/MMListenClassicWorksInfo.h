@class NSString, NSMutableArray;

@interface MMListenClassicWorksInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *worksName;
@property (retain, nonatomic) NSString *composerName;
@property (retain, nonatomic) NSMutableArray *listenIdList;
@property (nonatomic) int indexInMusicAlbum;

+ (void)initialize;

@end
