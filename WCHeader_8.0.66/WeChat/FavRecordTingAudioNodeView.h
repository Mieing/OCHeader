@class TingSharePlayButton, NSString;

@interface FavRecordTingAudioNodeView : FavRecordLeftThumbRightLabelNodeView <MMImageLoaderObserver>

@property (retain, nonatomic) TingSharePlayButton *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
