@class HTSEventContext, ShelfInfo, IESLiveNativeAppApi, IESLiveComponentContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveNativeAppPluginAnchorInLiveContext : NSObject <IESLiveNativeAppPluginContext>

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (retain, nonatomic) id<IESLiveRoomService> roomInfo;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) IESLiveNativeAppApi *networkAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)castedContext:(id)a0;

- (void)updateShelfInfo:(id)a0 isReplace:(BOOL)a1 at:(const char *)a2;
- (void).cxx_destruct;

@end
