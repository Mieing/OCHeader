@class HTSEventContext, IESLiveDI, IESLiveMultiEnterPreloadConfig, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveDIContext, IESLivePlayerProtocol;

@interface IESLiveAudienceInitialParam : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) HTSEventContext *pageContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveDIContext> parentDIContext;
@property (retain, nonatomic) IESLiveDI *defaultRoomDI;
@property (retain, nonatomic) IESLiveMultiEnterPreloadConfig *enterPreloadConfig;

+ (id)createWithRoom:(id)a0 player:(id)a1 context:(id)a2 componentContext:(id)a3 parentDIContext:(id)a4 defaultRoomDI:(id)a5;

- (void).cxx_destruct;

@end
