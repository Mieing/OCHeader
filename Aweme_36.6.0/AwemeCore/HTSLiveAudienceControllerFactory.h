@class NSString, IESLiveComponentContext;

@interface HTSLiveAudienceControllerFactory : NSObject <HTSLiveAudienceControllerProvider>

@property (copy, nonatomic) NSString *sourcePage;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerWithLiveRoomModel:(id)a0 player:(id)a1 pageContext:(id)a2 parentDIContext:(id)a3;
- (id)controllerWithController:(id)a0 byReplaceLiveRoomModel:(id)a1 pageContext:(id)a2 parentDIContext:(id)a3;
- (id)controllerWithLiveRoomModel:(id)a0 player:(id)a1 pageContext:(id)a2 parentDIContext:(id)a3 roomAisle:(id)a4;
- (void)configVSPropertiesWithContext:(id)a0 roomAisle:(id)a1;
- (BOOL)canReuseAudienceVC:(id)a0;
- (void)adaptStoreSetMethodWithAudienceController:(id)a0 roomAisle:(id)a1;
- (id)controllerWithEnterRoomAisle:(id)a0;
- (id)nestedControllerWithLiveRoomModel:(id)a0 pageContext:(id)a1;
- (void).cxx_destruct;

@end
