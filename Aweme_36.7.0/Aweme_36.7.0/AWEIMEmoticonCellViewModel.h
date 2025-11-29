@class AWEIMEmoticonThemeModel, NSString, AWEIMEmoticonModel, AWEIMAudioEmojiPlayer, AWEIMCacheableImageRenderModel;

@interface AWEIMEmoticonCellViewModel : NSObject

@property (retain, nonatomic) AWEIMCacheableImageRenderModel *renderModel;
@property (nonatomic) BOOL needLoadConfig;
@property (nonatomic) unsigned long long vmType;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) AWEIMEmoticonModel *emoticonModel;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (retain, nonatomic) AWEIMAudioEmojiPlayer *audioEmojiPlayer;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isLimited;
@property (copy, nonatomic) id /* block */ limitedImageBlock;
@property (copy, nonatomic) id /* block */ functionBlock;
@property (copy, nonatomic) id /* block */ functionShowBlock;
@property (copy, nonatomic) id /* block */ emoticonShowBlock;
@property (copy, nonatomic) id /* block */ didClickAudioAnimationBlock;
@property (copy, nonatomic) NSString *imageLoadTrackScene;
@property (copy, nonatomic) id /* block */ lazyLoadConfigBlock;
@property (copy, nonatomic) id /* block */ imageDidLoadBlock;

- (void).cxx_destruct;
- (id)init;
- (void)prepareForDisplayIfNeeded;

@end
