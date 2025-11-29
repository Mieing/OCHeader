@class NSArray, AWEUserModel;
@protocol AWETeenModeProfileEditViewControllerDelegate;

@interface AWETeenModeProfileEditViewModel : NSObject

@property (copy, nonatomic) NSArray *cellTypeArray;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSArray *itemsArray;
@property (weak, nonatomic) id<AWETeenModeProfileEditViewControllerDelegate> controllerDelegate;
@property (nonatomic) float completionPercent;

- (void)refreshWithUser:(id)a0;
- (id)constructItemsArray;
- (id)_buildItemWithType:(long long)a0;
- (void).cxx_destruct;

@end
