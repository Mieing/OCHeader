@class AWEModernFeedTagFrame, NSString, AWEModernFeedContentFrame, AWEGeneralSearchModel, AWEModernFeedBaseContainerFrame, AWESearchWeakAnchorComponentModel, NSDictionary, AWESearchUGCPageContext, AWEModernFeedActionPanelFrame, AWESearchComponentTransformModel, AWESearchStrongAnchorComponentModel, AWEModernFeedAuthorInfoFrame;
@protocol AWEFeedVideoSingleCardLayoutAdjusterProtocol;

@interface AWEGeneralSearchVideoCardModel : NSObject

@property (retain, nonatomic) AWEGeneralSearchModel *businessModel;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> qualityLayoutAdjuster;
@property (retain, nonatomic) id<AWEFeedVideoSingleCardLayoutAdjusterProtocol> singleCardLayoutAdjuster;
@property (nonatomic) BOOL isXiGuaVideoCard;
@property (copy, nonatomic) NSString *cellIsRed;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) long long docIndex;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWESearchUGCPageContext *ugcPageContext;
@property (retain, nonatomic) id bindedData;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isSearchStyle;
@property (copy, nonatomic) NSString *adEventName;
@property (nonatomic) BOOL isTrendingStyle;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) unsigned long long browsedType;
@property (retain, nonatomic) AWEModernFeedAuthorInfoFrame *authorInfoFrame;
@property (retain, nonatomic) AWEModernFeedActionPanelFrame *actionPanelFrame;
@property (retain, nonatomic) AWEModernFeedContentFrame *contentDescFrame;
@property (retain, nonatomic) AWEModernFeedContentFrame *abstractFrame;
@property (retain, nonatomic) AWEModernFeedBaseContainerFrame *baseContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } goodsLynxViewFrame;
@property (nonatomic) struct CGSize { double width; double height; } privacySize;
@property (nonatomic) unsigned long long videoContainerViewLayout;
@property (nonatomic) BOOL isShowNativeFooterView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoFooterLynxViewFrame;
@property (retain, nonatomic) AWEModernFeedTagFrame *tagFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoSectionFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } musicInfoBottomViewFrame;
@property (nonatomic) BOOL shouldShowMusicInfoBottomView;
@property (nonatomic) long long cutType;
@property (copy, nonatomic) NSDictionary *searchLogPassback;
@property (copy, nonatomic) NSString *searchType;
@property (nonatomic) BOOL shouldShowPrivacyTag;
@property (nonatomic) BOOL isAdaptedForBrowsed;
@property (copy, nonatomic) NSString *displayPrivacyStr;
@property (nonatomic) double adjustedContainerWidth;
@property (nonatomic) BOOL isVideoContinuePlayPopover;
@property (nonatomic) BOOL shouldGraduateLoad;
@property (retain, nonatomic) AWESearchComponentTransformModel *componentTransformModel;
@property (retain, nonatomic) AWESearchWeakAnchorComponentModel *weakAnchorComponentModel;
@property (retain, nonatomic) AWESearchStrongAnchorComponentModel *strongAnchorComponentModel;

- (void).cxx_destruct;

@end
