@class AWEUserModel;

@interface AFDSelectUserCellViewModel : NSObject

@property (nonatomic) BOOL needUseCardUI;
@property (retain, nonatomic) AWEUserModel *userModel;

- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;
- (double)cellHeight;

@end
