@class NSMutableArray, FinderLiveAnchorClosePageDataInfo;

@interface FinderLiveAnchorCloseLivePageData : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *unitList;
@property (retain, nonatomic) FinderLiveAnchorClosePageDataInfo *closePageInfo;

+ (void)initialize;

- (void)setClosePageInfo:(id)a0;
- (id)closePageInfo;
- (void)setUnitList:(id)a0;
- (id)unitList;

@end
