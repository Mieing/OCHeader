@class AWEUserModel;
@protocol AWETeenLongPressPanelBlockDelegate;

@interface AWETeenLongPressPanelBlockViewModel : AWETeenLongPressPanelBaseViewModel

@property (weak, nonatomic) id<AWETeenLongPressPanelBlockDelegate> blockDelegate;
@property (retain, nonatomic) AWEUserModel *userModel;

- (void)configVM;
- (id)initWithUserModel:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
