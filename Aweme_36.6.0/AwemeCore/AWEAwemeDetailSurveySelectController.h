@class NSString, AWEAwemeDetailSurveySelectBlockAlert;

@interface AWEAwemeDetailSurveySelectController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEAwemeDetailSurveySelectBlockAlert *surveySelectBlockAlert;
@property (copy, nonatomic) NSString *quitMethod;

- (void)viewDidLoadAfterTableviewSetup;
- (void)onClickToCloseSurveyCardNotification:(id)a0;
- (void)trackQuestionnaireQuit:(id)a0;
- (void)removeBlockAlert;
- (void)addBlockAlert;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
