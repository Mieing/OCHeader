@class NSString, NSMutableArray;

@interface FinderGuideBarItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int friendLikeCount;

+ (void)initialize;

@end
