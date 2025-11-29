@class NSString, PAGView, WCAdPagInfo, WCAdPagViewConfig, WCAdURLImageView;

@interface WCAdPagView : MMUIView <PAGViewListener>

@property (retain, nonatomic) WCAdPagInfo *pagInfo;
@property (retain, nonatomic) WCAdPagViewConfig *config;
@property (retain, nonatomic) WCAdURLImageView *thumbView;
@property (retain, nonatomic) PAGView *pagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pagInfo:(id)a1 config:(id)a2;
- (void)initView;
- (void)initPagView;
- (void)play;
- (void)pause;
- (void)stop;
- (long long)fetchContentModeFromScaleMode:(int)a0;
- (void)onAnimationUpdate:(id)a0;
- (void).cxx_destruct;

@end
