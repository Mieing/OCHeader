@class AWEIMInputFAQModel;
@protocol AWEIMInputFAQListViewModelDelegate;

@interface AWEIMInputFAQListViewModel : NSObject

@property (retain, nonatomic) AWEIMInputFAQModel *model;
@property (nonatomic) long long role;
@property (weak, nonatomic) id<AWEIMInputFAQListViewModelDelegate> delegate;

- (void)didSelectedEntity:(id)a0 inActionBar:(BOOL)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
