@class NSArray, AWEHomePageRemoteModel;

@interface AWEHomePageRemoteControllersModel : NSObject

@property (retain, nonatomic) AWEHomePageRemoteModel *remoteModel;
@property (copy, nonatomic) NSArray *moduleControllerArray;
@property (copy, nonatomic) NSArray *originModuleControllerArray;

- (id)consumedBusinessIDs;
- (BOOL)askAllControllersIfPanelCanShow;
- (void).cxx_destruct;

@end
