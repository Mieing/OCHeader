@class AWEIMAudioAnimationView, NSString;

@interface AWEIMEmoticonAudioEmojiCollectionViewCell : AWEIMEmoticonImageCollectionViewCell <AWEIMAudioEmojiPlayerDelegate>

@property (retain, nonatomic) AWEIMAudioAnimationView *audioView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutComponent;
- (void)createComponent;
- (void)audioEmojiPlayer:(id)a0 statusDidChangeFrom:(unsigned long long)a1 toStaus:(unsigned long long)a2;
- (void)renderUIWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
