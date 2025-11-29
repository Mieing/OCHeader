@class NSString, CALayer, UIView, RecommendedMusicInfo;

@interface WCWidgetPlayerParams : NSObject

@property (retain, nonatomic) CALayer *overlayViewLayer;
@property (retain, nonatomic) NSString *audioModuleIdentifier;
@property (nonatomic) BOOL isAudioModuleEnabled;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) RecommendedMusicInfo *bgmMusicInfo;
@property (nonatomic) BOOL isBGMMusicMute;
@property (nonatomic) BOOL isAutoReplay;
@property (nonatomic) int audioModuleScene;

- (id)init;
- (id)description;
- (BOOL)hasValidWidget;
- (void).cxx_destruct;

@end
