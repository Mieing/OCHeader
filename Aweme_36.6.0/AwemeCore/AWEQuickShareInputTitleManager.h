@class NSDictionary;
@protocol AWEShareToStoryModelProtocol;

@interface AWEQuickShareInputTitleManager : NSObject

@property (retain, nonatomic) id<AWEShareToStoryModelProtocol> storyModel;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)sharedManager;

- (id)panelTitle;
- (void)showInputViewWithStoryModel:(id)a0 trackParams:(id)a1 cover:(id)a2 completion:(id /* block */)a3;
- (void)showIronManInputViewWithStoryModel:(id)a0 trackParams:(id)a1 cover:(id)a2 completion:(id /* block */)a3;
- (void)showInputViewWithLiveStoryModel:(id)a0 trackParams:(id)a1 cover:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
