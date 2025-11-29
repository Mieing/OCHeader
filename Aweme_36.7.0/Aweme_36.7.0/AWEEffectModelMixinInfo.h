@class AWEEffectCaptionFollowShotInfo, AWEEffectModelMixinAEEffectInfo, AWEEffectModelMixinAlbumConfigInfo, AWEEffectModelMixinPropTypeInfo, AWEEffectModelMixinExtraInfo, IESEffectModel, AWEEffectModelMixinMusicInfo, ACCEffectTextOnImageInfo, AWEEffectModelMixinAIGCInfo;

@interface AWEEffectModelMixinInfo : NSObject

@property (weak, nonatomic) IESEffectModel *hostEffectModel;
@property (retain, nonatomic) AWEEffectModelMixinMusicInfo *musicInfo;
@property (retain, nonatomic) AWEEffectModelMixinAIGCInfo *AIGCInfo;
@property (retain, nonatomic) AWEEffectModelMixinAlbumConfigInfo *albumConfigInfo;
@property (retain, nonatomic) AWEEffectModelMixinAEEffectInfo *AEEffectConfigInfo;
@property (retain, nonatomic) AWEEffectModelMixinPropTypeInfo *propTypeInfo;
@property (retain, nonatomic) AWEEffectModelMixinExtraInfo *extraInfo;
@property (retain, nonatomic) ACCEffectTextOnImageInfo *textOnImageInfo;
@property (retain, nonatomic) AWEEffectCaptionFollowShotInfo *captionFollowShotInfo;

- (void).cxx_destruct;

@end
