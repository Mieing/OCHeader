@class NSString, NSMutableArray;

@interface FeedComponentHideCtrl : GPBMessage

@property (nonatomic) BOOL hideAnchor;
@property (nonatomic) BOOL hasHideAnchor;
@property (nonatomic) BOOL hideMix;
@property (nonatomic) BOOL hasHideMix;
@property (nonatomic) BOOL hideHotspot;
@property (nonatomic) BOOL hasHideHotspot;
@property (nonatomic) BOOL hideToutiao;
@property (nonatomic) BOOL hasHideToutiao;
@property (nonatomic) BOOL hideXigua;
@property (nonatomic) BOOL hasHideXigua;
@property (nonatomic) BOOL hideVs;
@property (nonatomic) BOOL hasHideVs;
@property (nonatomic) BOOL hideSearch;
@property (nonatomic) BOOL hasHideSearch;
@property (nonatomic) BOOL hideRelateRec;
@property (nonatomic) BOOL hasHideRelateRec;
@property (nonatomic) BOOL hidePlaylist;
@property (nonatomic) BOOL hasHidePlaylist;
@property (retain, nonatomic) NSMutableArray *hideBtnListArray;
@property (readonly, nonatomic) unsigned long long hideBtnListArray_Count;
@property (retain, nonatomic) NSMutableArray *showBtnListArray;
@property (readonly, nonatomic) unsigned long long showBtnListArray_Count;
@property (nonatomic) BOOL useCommonAnchor;
@property (nonatomic) BOOL hasUseCommonAnchor;
@property (nonatomic) int feedShopShow;
@property (nonatomic) BOOL hasFeedShopShow;
@property (nonatomic) int feedRecLabelShow;
@property (nonatomic) BOOL hasFeedRecLabelShow;
@property (nonatomic) int feedSocLabelShow;
@property (nonatomic) BOOL hasFeedSocLabelShow;
@property (nonatomic) int feedTitleLineNum;
@property (nonatomic) BOOL hasFeedTitleLineNum;
@property (copy, nonatomic) NSString *componentStrategy;
@property (nonatomic) BOOL hasComponentStrategy;

+ (id)descriptor;

- (int)feedTitleLineNum;
- (int)feedSocLabelShow;
- (int)feedRecLabelShow;
- (int)feedShopShow;
- (id)hideBtnListArray;
- (BOOL)hidePlaylist;
- (BOOL)hideRelateRec;
- (BOOL)hideSearch;
- (BOOL)hideVs;
- (BOOL)hideXigua;
- (BOOL)hideToutiao;
- (BOOL)hideHotspot;
- (BOOL)hideMix;
- (BOOL)hideAnchor;

@end
