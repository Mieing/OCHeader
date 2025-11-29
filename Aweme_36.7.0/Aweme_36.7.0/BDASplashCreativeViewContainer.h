@class NSString, NSDictionary, BDASplashCreativeLynxViewContainer, BDASplashCreativeEffectView;
@protocol BDASplashComplianceBaseDelegate;

@interface BDASplashCreativeViewContainer : NSObject <BDASplashCreativeViewProtocol>

@property (retain, nonatomic) BDASplashCreativeEffectView *effectView;
@property (retain, nonatomic) BDASplashCreativeLynxViewContainer *lynxViewContainer;
@property (copy, nonatomic) NSDictionary *config;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (weak, nonatomic) id<BDASplashComplianceBaseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCreativeViewWithConfig:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 delegate:(id)a2;

@end
