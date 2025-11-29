@class FinderObjectEventDesc, NSString, NSMutableArray, FinderLocation;

@interface FinderPostGuideInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *postGuideTopicTags;
@property (retain, nonatomic) NSString *bgColorTopHex;
@property (retain, nonatomic) NSString *bgColorBottomHex;
@property (retain, nonatomic) FinderLocation *location;
@property (retain, nonatomic) FinderObjectEventDesc *event;
@property (retain, nonatomic) NSMutableArray *hashTagList;

+ (void)initialize;

@end
