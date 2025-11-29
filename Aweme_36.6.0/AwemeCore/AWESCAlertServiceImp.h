@class NSString;

@interface AWESCAlertServiceImp : NSObject <BDSCAlertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAlertOn:(id)a0 title:(id)a1 subTitle:(id)a2 actions:(id)a3 canDismissByClickMask:(BOOL)a4 needCloseIcon:(BOOL)a5 closeBlock:(id /* block */)a6;
- (void)showAlertOn:(id)a0 title:(id)a1 subTitle:(id)a2 actions:(id)a3 canDismissByClickMask:(BOOL)a4 animateLoop:(unsigned long long)a5 image:(id)a6 needCloseIcon:(BOOL)a7 forceShowImageInLandScape:(BOOL)a8 closeBlock:(id /* block */)a9 completion:(id /* block */)a10;
- (void)showAlertOn:(id)a0 title:(id)a1 subTitle:(id)a2 actions:(id)a3 canDismissByClickMask:(BOOL)a4 animateLoop:(unsigned long long)a5 image:(id)a6 needCloseIcon:(BOOL)a7 forceShowImageInLandScape:(BOOL)a8 closeBlock:(id /* block */)a9;
- (void)showAlertOn:(id)a0 title:(id)a1 subTitle:(id)a2 actions:(id)a3 actionsAreButtonStyle:(BOOL)a4 actionsAreHorizontal:(BOOL)a5 canDismissByClickMask:(BOOL)a6 animateLoop:(unsigned long long)a7 image:(id)a8 imageSize:(struct CGSize { double x0; double x1; })a9 needCloseIcon:(BOOL)a10 forceShowImageInLandScape:(BOOL)a11 closeBlock:(id /* block */)a12 completion:(id /* block */)a13;
- (unsigned long long)changeDuxUseFrom:(unsigned long long)a0;
- (void)showAlertOn:(id)a0 title:(id)a1 subTitle:(id)a2 actions:(id)a3;

@end
