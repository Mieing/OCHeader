@class NSString;
@protocol IESLiveLayoutViewProvider;

@interface IESLiveLayoutSceneActivity : NSObject <IESLiveLayoutScene>

@property (weak, nonatomic) id<IESLiveLayoutViewProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutPluginIfNeed;
- (void)layoutDHRightTop;
- (BOOL)shouldLayoutKTVIndicator;
- (void)layoutRightVerticalViewsWithTypes:(id)a0 padding:(double)a1 rightMargin:(double)a2;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets:(id)a0;

@end
