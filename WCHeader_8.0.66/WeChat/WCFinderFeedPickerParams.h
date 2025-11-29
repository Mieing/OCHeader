@class NSString, NSData, WCFinderFilePickLimiter;

@interface WCFinderFeedPickerParams : NSObject

@property (nonatomic) BOOL hideSearchIcon;
@property (nonatomic) BOOL hidePublishIcon;
@property (nonatomic) BOOL hideTopBar;
@property (nonatomic) BOOL isPlanePickerStyle;
@property (copy, nonatomic) NSString *vcTitle;
@property (nonatomic) BOOL isOverrideCellHeight;
@property (nonatomic) double heightRatio;
@property (nonatomic) BOOL isPreviewDisabled;
@property (nonatomic) BOOL needFixNavHeight;
@property (nonatomic) BOOL noEdgeInset;
@property (nonatomic) BOOL hideBottomExceptHeadView;
@property (nonatomic) BOOL disableScroll;
@property (nonatomic) BOOL showSelectionView;
@property (nonatomic) long long minDurationLimit;
@property (retain, nonatomic) NSString *minDurationToast;
@property (retain, nonatomic) NSString *onlyAllowVideoFeedToast;
@property (retain, nonatomic) WCFinderFilePickLimiter *limiter;
@property (nonatomic) int enterScene;
@property (retain, nonatomic) NSData *enterExtBuf;
@property (copy, nonatomic) NSString *sessionId;

- (id)init;
- (void).cxx_destruct;

@end
