@class NSArray, UIView;

@interface IESLiveEffectPreviewHandler : NSObject

@property (retain, nonatomic) UIView *renderView;
@property (retain, nonatomic) NSArray *requirementTypes;
@property (nonatomic) double availableMemthreshold;
@property (nonatomic) BOOL shouldForbidden;

- (void)setPreviewEffect:(id)a0;
- (void)invalidatePreviewFunc;
- (void)refreshForbiddenStatus;
- (void)createEffectPreview;
- (void)startEffectPreview;
- (void)stopEffectPreview;
- (id)gettRenderView;
- (BOOL)effectDisablePreview:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
