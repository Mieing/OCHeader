@class AWEUserWorkViewControllerConfig;

@interface AWEUserWorkController : AWEDCFeedBaseController

@property (readonly, weak, nonatomic) AWEUserWorkViewControllerConfig *config;

- (id)modelsArray;
- (id)allAwemeArray;
- (id)userWorkContext;

@end
