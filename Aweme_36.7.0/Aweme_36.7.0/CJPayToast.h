@class CJPayWindow, NSString;

@interface CJPayToast : NSObject <CJPayToastProtocol>

@property (retain, nonatomic) CJPayWindow *toastWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedToast;

- (void)toastText:(id)a0 inWindow:(id)a1;
- (void)toastText:(id)a0 duration:(double)a1 inWindow:(id)a2;
- (void)toastText:(id)a0 code:(id)a1 inWindow:(id)a2;
- (void)toastText:(id)a0 code:(id)a1 duration:(double)a2 inWindow:(id)a3;
- (void)toastText:(id)a0 inWindow:(id)a1 location:(unsigned long long)a2;
- (void)toastInTopWindowWithText:(id)a0;
- (void)toastInTopWindowWithText:(id)a0 showEndCompletion:(id /* block */)a1;
- (void)toastWithImageType:(long long)a0 title:(id)a1 subTitle:(id)a2;
- (void)toastWithImageType:(long long)a0 title:(id)a1 subTitle:(id)a2 durationInSec:(double)a3;
- (void)p_removeToastWindow;
- (void).cxx_destruct;

@end
