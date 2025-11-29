@class WCFinderJumpInfo, FinderJumpInfo_Style, FinderJumpInfo_PartialCarouselCardStyle, FinderJumpInfo_DynamicCarouselCardStyle, FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc, WCFinderJumpInfoDynamicCarouselDetailSubViewItem, WCFinderJumpInfoDynamicCarouselTitleViewItem, UIColor, NSString, WCFinderFeedContentVM, MMTimer, NSTimer, WCFinderJumpInfoDynamicCarouselDetailViewItem, NSAttributedString;
@protocol WCFinderJumpInfoDynamicCarouselViewModelDelegate;

@interface WCFinderJumpInfoDynamicCarouselViewModel : NSObject <WCFinderJumpInfoAsyncLoadManagerExt>

@property (retain, nonatomic) MMTimer *contentUpdatingTimer;
@property (retain, nonatomic) NSTimer *asyncLoadInfoDelayTimer;
@property (retain, nonatomic) FinderJumpInfo_PartialCarouselCardStyle *currentCardStyle;
@property (retain, nonatomic) FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc *currentCarouselDesc;
@property (copy, nonatomic) NSString *iconURL;
@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailSubViewItem *iconStatusViewItem;
@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselTitleViewItem *titleViewItem;
@property (retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailViewItem *detailViewItem;
@property (copy, nonatomic) NSAttributedString *bottomAttributedText;
@property (copy, nonatomic) NSString *actionIconName;
@property (copy, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) UIColor *actionTitleColor;
@property (readonly, nonatomic) UIColor *defaultActionTitleColor;
@property (retain, nonatomic) UIColor *actionBackgroundColor;
@property (readonly, nonatomic) UIColor *defaultActionBackgroundColor;
@property (weak, nonatomic) id<WCFinderJumpInfoDynamicCarouselViewModelDelegate> delegate;
@property (readonly, nonatomic) WCFinderFeedContentVM *feedContentVM;
@property (readonly, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (readonly, nonatomic) int showPosition;
@property (readonly, nonatomic) FinderJumpInfo_Style *originalShowStyle;
@property (readonly, nonatomic) FinderJumpInfo_Style *currentShowStyle;
@property (readonly, nonatomic) FinderJumpInfo_DynamicCarouselCardStyle *currentDynamicCarouselCardStyle;
@property (nonatomic) unsigned long long cardShape;
@property (nonatomic) double appearingDelayTimeInMS;
@property (nonatomic) double expandingDelayTimeInMS;
@property (readonly, nonatomic) BOOL isPlayingCarousel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithFeedContentVM:(id)a0 jumpInfo:(id)a1 showPosition:(int)a2;

- (id)initWithFeedContentVM:(id)a0 jumpInfo:(id)a1 showPosition:(int)a2;
- (void)dealloc;
- (void)updateJumpInfo:(id)a0 showPosition:(int)a1;
- (void)reloadCurrentShowStyle;
- (void)reloadViewProperties;
- (void)reloadIconViewItem;
- (void)reloadTitleViewItem;
- (void)reloadDetailViewItem;
- (void)reloadBottomText;
- (BOOL)hasMoneyUnit:(id)a0;
- (void)asyncLoadInfo:(BOOL)a0;
- (void)pendAsyncLoadInfo:(BOOL)a0 afterDelay:(double)a1;
- (void)cancelAsyncLoadInfo;
- (void)finderJumpInfoAsyncLoadManager:(id)a0 didFetchJumpInfoStylesWithRecord:(id)a1 updated:(BOOL)a2;
- (void)startPlayingCarousel;
- (void)stopPlayingCarousel;
- (void)restartPlayingCarousel;
- (void)_pendNextCarouselItem;
- (void)_updateNextCarouselItem;
- (BOOL)shouldUpdateContentConstantly;
- (void)startContentUpdatingTimerIfNeeded;
- (void)stopContentUpdatingTimer;
- (void)handleContentUpdatingTimer:(id)a0;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)notifyDidReloadViewProperties:(BOOL)a0;
- (void)notifyDidSwitchCarouselContent;
- (void)notifyDidUpdateCarouselContent;
- (void)printCurrentCarouselInfo;
- (void).cxx_destruct;

@end
