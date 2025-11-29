@class NSString, UIViewController;
@protocol AFDNewSchoolStorySubTabContainerProtocol;

@interface AFDNewSchoolStorySlidingTabModelConfig : NSObject

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *selectedTabName;
@property (retain, nonatomic) UIViewController<AFDNewSchoolStorySubTabContainerProtocol> *tabViewController;

- (void).cxx_destruct;

@end
