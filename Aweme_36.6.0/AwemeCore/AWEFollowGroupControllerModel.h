@class NSNumber, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol, AWEFollowGroupViewControllerProtocol;

@interface AWEFollowGroupControllerModel : NSObject

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) BOOL canReuse;
@property (readonly, nonatomic) NSNumber *groupID;
@property (readonly, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFollowGroupViewControllerProtocol> *viewController;

- (id)initWithActionType:(unsigned long long)a0 groupID:(id)a1 canReuse:(BOOL)a2 viewController:(id)a3;
- (void)updateGroupIDForReuse:(id)a0;
- (void).cxx_destruct;

@end
