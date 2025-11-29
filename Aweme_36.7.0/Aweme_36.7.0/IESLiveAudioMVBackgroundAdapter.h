@class IESLiveAudioBackgroundBaseModel;

@interface IESLiveAudioMVBackgroundAdapter : NSObject

@property (copy, nonatomic) id /* block */ firstRenderBlock;
@property (retain, nonatomic) IESLiveAudioBackgroundBaseModel *dataModel;
@property (nonatomic) long long curBGImgType;
@property (nonatomic) unsigned long long mvBackgroundType;

- (void)updateAudioBackgroundBaseModel:(id)a0 updateAction:(id /* block */)a1;
- (void)updateMVBackground:(id)a0;
- (void).cxx_destruct;

@end
