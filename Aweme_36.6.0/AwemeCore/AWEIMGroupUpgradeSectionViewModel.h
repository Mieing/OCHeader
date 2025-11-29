@class NSString, NSArray, AWEIMGroupUpgradeSectionFooterViewModel;

@interface AWEIMGroupUpgradeSectionViewModel : NSObject

@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *taskTypes;
@property (retain, nonatomic) NSArray *upgradeTaskViewModels;
@property (retain, nonatomic) AWEIMGroupUpgradeSectionFooterViewModel *sectionFooterViewModel;

- (void).cxx_destruct;

@end
