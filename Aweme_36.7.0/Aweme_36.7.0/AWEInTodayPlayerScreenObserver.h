@class NSDictionary, AWEInTodayPlayerGridHandler, NSObject;
@protocol AWEMemoriesPlayerDataControllerProtocol;

@interface AWEInTodayPlayerScreenObserver : NSObject

@property (copy, nonatomic) NSDictionary *defaultParams;
@property (weak, nonatomic) AWEInTodayPlayerGridHandler *gridHandler;
@property (weak, nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> *dataController;

- (void)screenCapturedDidChange:(id)a0;
- (void)observeScreenShot;
- (void)observeScreenRecord;
- (void)userDidTakeScreenShot:(id)a0;
- (void).cxx_destruct;
- (void)run;
- (void)dealloc;

@end
