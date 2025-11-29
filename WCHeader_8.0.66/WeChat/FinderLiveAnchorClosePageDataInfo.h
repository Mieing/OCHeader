@class NSString, NSMutableArray, FinderJumpInfo;

@interface FinderLiveAnchorClosePageDataInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *pageItemList;
@property (retain, nonatomic) FinderJumpInfo *detailDataJumpInfo;
@property (retain, nonatomic) NSString *profileUrl;
@property (retain, nonatomic) NSString *backgroundUrl;

+ (void)initialize;

@end
