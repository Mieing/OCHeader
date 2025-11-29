@class IESLiveSensitiveApi, HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveSensitiveStore : NSObject <IESLiveSensitiveActions>

@property (retain, nonatomic) IESLiveSensitiveApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL disableHeader;
@property (nonatomic) BOOL shouldShowBackBtn;
@property (nonatomic) BOOL useStandardPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)requestSensitiveWord:(id /* block */)a0;
- (void)addSensitiveWord:(id)a0 completion:(id /* block */)a1;
- (void)delSensitiveWord:(id)a0 completion:(id /* block */)a1;
- (id)initWithLiveRoom:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
