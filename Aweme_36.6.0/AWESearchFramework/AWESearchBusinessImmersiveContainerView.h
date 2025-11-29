@class NSString, UIImageView, AWESearchImmersiveModel, AWESearchDynamicEngine;
@protocol AWEBusinessImmersiveContainerDelegate;

@interface AWESearchBusinessImmersiveContainerView : UIView <AWESearchBusinessImmersiveContainerViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWESearchDynamicEngine *searchDynamicEngine;
@property (retain, nonatomic) AWESearchImmersiveModel *model;
@property (weak, nonatomic) id<AWEBusinessImmersiveContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)getScreenWidth;
- (void)createImageView;
- (void)createLynxView:(id)a0;
- (void)updateLynxView:(id)a0;
- (struct CGSize { double x0; double x1; })getBusinessImmersiveContainerViewBounds;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)updateImageView;
- (void)updateWithModel:(id)a0;

@end
