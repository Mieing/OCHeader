@class NSArray;

@interface ABKAutoCaptionsConfig : ABKBaseStickerConfig

@property (retain, nonatomic) NSArray *textClips;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ selectStateDidChange;
@property (copy, nonatomic) id /* block */ showSelectedViewWhenPan;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ panBlock;
@property (copy, nonatomic) id /* block */ gestureStartPerfBlock;
@property (copy, nonatomic) id /* block */ gestureEndPerfBlock;
@property (copy, nonatomic) id /* block */ gesturePanPerfBlock;

- (id)initWithTextClips:(id)a0;
- (void).cxx_destruct;

@end
