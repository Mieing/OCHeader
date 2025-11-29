@class AWEDCFeedBaseSectionController, AWEAwemeModel, AWEDCFeedPageContext, AWEDCFeedBaseCell, UIViewController;

@interface AWEDCFeedDislikeActionModel : NSObject

@property (weak, nonatomic) AWEDCFeedBaseCell *cell;
@property (weak, nonatomic) AWEDCFeedBaseSectionController *sectionController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) long long index;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) UIViewController *containerVC;
@property (copy, nonatomic) id /* block */ feedbackBlock;

- (void).cxx_destruct;

@end
