@class AWEReplaceMusicListDataController, NSString, AWEUserModel, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEProfileReplaceMusicAwemeDetailManager : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) AWEReplaceMusicListDataController *dataController;
@property (retain, nonatomic) AWEUserModel *user;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *awemeDetailVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceMusicPublishProgressWithTask:(id)a0 taskStatus:(long long)a1;
- (void)deleteAwemeWithID:(id)a0;
- (id)replaceMusicDetailViewController;
- (id)initWithDataController:(id)a0 user:(id)a1;
- (void)showReplaceMusicFullPageAwemeDetailList;
- (void).cxx_destruct;
- (void)dealloc;

@end
