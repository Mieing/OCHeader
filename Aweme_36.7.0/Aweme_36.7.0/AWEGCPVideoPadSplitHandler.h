@class NSString, UIViewController;

@interface AWEGCPVideoPadSplitHandler : NSObject <IESGCPVideoPadSplitService>

@property (weak, nonatomic) UIViewController *gameDetailVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEPadSplitScreenAdapter;
- (BOOL)isSupportSplit;
- (BOOL)isGameDetailSpilt;
- (BOOL)closeGameDetailWithCompletion:(id /* block */)a0;
- (BOOL)tryOpenGameDetailWithUrlString:(id)a0;
- (BOOL)closeGameDetailWithViewController:(id)a0 completion:(id /* block */)a1;
- (BOOL)isSpiltWithViewController:(id)a0;
- (id)getSplitController;
- (id)getDetailVCWithUrlString:(id)a0;
- (void)enterSplitScreenWithContentVC:(id)a0 rightScene:(id)a1 splitController:(id)a2 animate:(BOOL)a3;
- (BOOL)canOpenWithSplitController:(id)a0;
- (void).cxx_destruct;

@end
