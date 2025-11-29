@class NSString, NSDictionary, MMWebViewMpInfoModelVideoInfo;

@interface MMWebViewMpInfoModel : NSObject

@property (copy, nonatomic) NSString *brandIconUrl;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *brandUserName;
@property (copy, nonatomic) NSString *pageTitle;
@property (copy, nonatomic) NSString *pageCover;
@property (retain, nonatomic) NSString *pageCustomSnapShotBase64Str;
@property (nonatomic) unsigned int watermarkType;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic) BOOL enableShareImageWatermark;
@property (retain, nonatomic) NSDictionary *shareImageWatermarkParams;
@property (copy, nonatomic) NSString *recentReadUrl;
@property (copy, nonatomic) NSString *underlineUrl;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int itemIdx;
@property (nonatomic) BOOL hasItemShowType;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) BOOL isPaySubcribe;
@property (nonatomic) BOOL isTopBarShow;
@property (nonatomic) BOOL showSourceInfo;
@property (nonatomic) BOOL enableReadArticle;
@property (nonatomic) BOOL sendArticleReadingBtnClicked;
@property (nonatomic) BOOL disableShowFinderLiveTopBar;
@property (nonatomic) BOOL enableForwardMP;
@property (retain, nonatomic) MMWebViewMpInfoModelVideoInfo *videoInfo;
@property (nonatomic) BOOL hasFinderElement;
@property (nonatomic) BOOL isShowMenuBrandInfo;
@property (nonatomic) BOOL isDisableMenuHeader;
@property (nonatomic) unsigned int brandServiceType;
@property (nonatomic) unsigned int landingTabId;

- (BOOL)isProfileModelDataValid;
- (id)mpPageCommonId;
- (BOOL)isMenuItemNeedHiddenInMpPage:(id)a0;
- (BOOL)isForwardMPEnabled;
- (BOOL)isUsePageCoverInHistoryRec;
- (void).cxx_destruct;

@end
