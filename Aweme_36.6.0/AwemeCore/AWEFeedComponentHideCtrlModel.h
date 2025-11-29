@class NSArray, NSString;

@interface AWEFeedComponentHideCtrlModel : AWEBaseApiModel

@property (nonatomic) BOOL hideAnchor;
@property (nonatomic) BOOL hideMixBar;
@property (nonatomic) BOOL hidePlaylistBar;
@property (nonatomic) BOOL hideHotspotBar;
@property (nonatomic) BOOL hideRelatedToutiaoBar;
@property (nonatomic) BOOL hideRelatedXiguaBar;
@property (nonatomic) BOOL hideVSFormatBar;
@property (nonatomic) BOOL hideRelatedSearchBar;
@property (nonatomic) BOOL hideRelatedRecommendBar;
@property (copy, nonatomic) NSArray *hideBtnList;
@property (copy, nonatomic) NSArray *showBtnList;
@property (nonatomic) BOOL useCommonAnchor;
@property (readonly, nonatomic) int feedShopShow;
@property (readonly, nonatomic) int feedRecLabelShow;
@property (readonly, nonatomic) int feedSocLabelShow;
@property (readonly, nonatomic) int feedTitleLineNum;
@property (copy, nonatomic) NSString *componentStrategy;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldHideMixBar;
- (void).cxx_destruct;

@end
