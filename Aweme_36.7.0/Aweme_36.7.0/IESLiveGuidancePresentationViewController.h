@class NSString, IESLiveGuidancePresentationView, NSArray;

@interface IESLiveGuidancePresentationViewController : UIViewController <IESLiveGuidancePresentationShownViewControllerDelegate>

@property (retain, nonatomic) IESLiveGuidancePresentationView *guidancePresentationView;
@property (copy, nonatomic) NSString *guidanceTips;
@property (copy, nonatomic) NSArray *guidanceImages;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)contentHeight;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
