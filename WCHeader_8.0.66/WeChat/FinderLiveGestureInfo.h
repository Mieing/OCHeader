@class NSString, FinderLiveGestureRenderConfig, FinderLiveNoticeGestureRenderConfig;

@interface FinderLiveGestureInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int gestureId;
@property (retain, nonatomic) NSString *gestureName;
@property (retain, nonatomic) NSString *gestureIconUrl;
@property (retain, nonatomic) NSString *anchorUrl;
@property (retain, nonatomic) NSString *tipsName;
@property (retain, nonatomic) NSString *tipsIconUrl;
@property (retain, nonatomic) NSString *resourceUrl;
@property (retain, nonatomic) FinderLiveGestureRenderConfig *renderConfig;
@property (retain, nonatomic) FinderLiveNoticeGestureRenderConfig *noticeRenderConfig;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int deleteFlag;
@property (nonatomic) unsigned long long supportSdkMinVersion;
@property (nonatomic) unsigned long long supportSdkMaxVersion;
@property (nonatomic) unsigned int rankNumber;

+ (void)initialize;

@end
