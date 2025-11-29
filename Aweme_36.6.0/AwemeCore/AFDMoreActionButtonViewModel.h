@class AWEUserModel, AFDUserListMoreActionContext;

@interface AFDMoreActionButtonViewModel : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AFDUserListMoreActionContext *context;

- (id)buildMoreActions;
- (void).cxx_destruct;
- (void)updateWithUser:(id)a0;

@end
