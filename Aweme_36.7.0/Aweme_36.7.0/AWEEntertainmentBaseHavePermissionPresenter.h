@class AWEPlayInteractionContext, NSString, AWEAwemeModel;

@interface AWEEntertainmentBaseHavePermissionPresenter : NSObject <AWEEntertainmentHavePermissionPresenterProtocol>

@property (readonly, weak, nonatomic) AWEAwemeModel *model;
@property (readonly, weak, nonatomic) AWEPlayInteractionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
