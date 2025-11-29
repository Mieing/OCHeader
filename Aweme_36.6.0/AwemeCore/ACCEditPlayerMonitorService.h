@class NSString, VEEditorSession;

@interface ACCEditPlayerMonitorService : NSObject <ACCEditBuildListener, ACCEditPlayerMonitorProtocol>

@property (weak, nonatomic) VEEditorSession *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
