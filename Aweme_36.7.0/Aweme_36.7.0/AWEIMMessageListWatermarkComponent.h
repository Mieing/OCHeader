@class UIImageView, NSString;

@interface AWEIMMessageListWatermarkComponent : AWEIMComponentBase <AWEIMMessageBaseVCLayoutAction>

@property (retain, nonatomic) UIImageView *watermarkImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)insertWatermarkImageViewToViewHierarchy;
- (void)updateWatermarkWithImage:(id)a0;
- (void).cxx_destruct;

@end
