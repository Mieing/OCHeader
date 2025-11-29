@class QRButtonInfo, NSString, BannerViewData, TitleInfo, NSMutableArray;

@interface HalfPage : WXPBGeneratedMessage

@property (retain, nonatomic) TitleInfo *titleInfo;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) QRButtonInfo *leftButton;
@property (retain, nonatomic) QRButtonInfo *rightButton;
@property (nonatomic) int wordingType;
@property (retain, nonatomic) NSMutableArray *wordingList;
@property (nonatomic) BOOL showGuideBanner;
@property (retain, nonatomic) BannerViewData *guideViewBanner;

+ (void)initialize;

@end
