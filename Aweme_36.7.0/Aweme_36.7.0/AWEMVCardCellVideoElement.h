@class NSString, UIView;
@protocol AWEDCFeedCellImageElementVideoViewProtocol;

@interface AWEMVCardCellVideoElement : AWEDCFeedBaseCellElement <AWEDCFeedCellImageElementVideoViewPlayerProtocol>

@property (retain, nonatomic) UIView<AWEDCFeedCellImageElementVideoViewProtocol> *videoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (long long)elementStyle;
+ (double)imageDisplayRatioWithSize:(struct CGSize { double x0; double x1; })a0 cutType:(long long)a1;

- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)configWithModel:(id)a0 context:(id)a1;
- (id)classNameWithReferString;
- (void)resetVideoPlayView;
- (void)showVideoPlayView;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithContext:(id)a0;
- (void)reset;
- (id)activeView;

@end
