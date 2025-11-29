@class NSDictionary, IESLiveEffectPlayerView;
@protocol IESLiveDIContext;

@interface IESLivePrivilegeUserEnterDressPreviewView : IESLivePrivilegeDressPreviewBaseView

@property (retain, nonatomic) IESLiveEffectPlayerView *playerView;
@property (retain, nonatomic) id<IESLiveDIContext> DIContext;
@property (retain, nonatomic) NSDictionary *mixInfo;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)initWithPreviewModel:(id)a0 DIContext:(id)a1;
- (void)setupPlayerWithPreviewModel:(id)a0;
- (void)reportError:(id)a0 previewModel:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
