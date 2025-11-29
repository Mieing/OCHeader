@class AWEEcomSearchProfile, AWEEcomSearchViewModel, AWEEcomSearchStateStore;

@interface AWEEcomResultViewControllerBuilder : NSObject

@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (retain, nonatomic) AWEEcomSearchStateStore *searchStateStore;
@property (weak, nonatomic) AWEEcomSearchProfile *profile;

+ (id)liveProductSceneBuilder:(id)a0;
+ (id)defaultSceneBuilder:(id)a0;
+ (id)mallSceneBuilder:(id)a0;

- (id)middleViewController;
- (id)resultViewController;
- (id)sugViewController;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
