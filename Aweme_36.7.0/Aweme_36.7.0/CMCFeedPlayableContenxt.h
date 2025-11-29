@class NSString, UIViewController, AWEAwemeModel;

@interface CMCFeedPlayableContenxt : CMCContext

@property (copy, nonatomic) NSString *urlString;
@property (weak, nonatomic) UIViewController *playableViewController;
@property (copy, nonatomic) id /* block */ alphaPlayerShowResult;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveRenderSuperViewFame;

- (void).cxx_destruct;

@end
