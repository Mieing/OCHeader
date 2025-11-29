@class AFDNewSchoolStoryContainerTracker, NSString, NSObject, UIViewController;
@protocol AFDSchoolStoryContainerDataSource, AFDNewSchoolStoryContainerProtocol;

@interface AFDNewSchoolStoryContainerContext : AWEPageContext

@property (weak, nonatomic) UIViewController<AFDNewSchoolStoryContainerProtocol> *container;
@property (weak, nonatomic) NSObject<AFDSchoolStoryContainerDataSource> *dataController;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ retryRequestDataBlock;
@property (weak, nonatomic) AFDNewSchoolStoryContainerTracker *tracker;

- (void).cxx_destruct;

@end
