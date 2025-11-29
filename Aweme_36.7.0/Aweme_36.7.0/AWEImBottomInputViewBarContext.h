@class NSString, NSDictionary, AWEAwemeModel, UIViewController;

@interface AWEImBottomInputViewBarContext : NSObject <AWEAwemeDetailBottomBarCommonContextProtocol>

@property (nonatomic) BOOL isDisplayIM_Image_Video;
@property (nonatomic) BOOL needHideIMInputBar;
@property (copy, nonatomic) id /* block */ didChangeShowingStatusPublishDailyGuideCallback;
@property (nonatomic) BOOL isShowingPublishDailyGuide;
@property (copy, nonatomic) id /* block */ didChangeShowingKeyboardStatusCallback;
@property (nonatomic) BOOL isShowingKeyboard;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL enterEcomLiveVideoHybrid;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) NSDictionary *liteTaskInfo;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *businessDict;
@property (nonatomic) BOOL canShowBottomBarInListCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
