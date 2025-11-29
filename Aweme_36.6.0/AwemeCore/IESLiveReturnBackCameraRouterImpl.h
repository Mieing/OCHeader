@class IESLiveReturnBackCameraStore, NSString, HTSLiveRoom, NSMutableArray, IESLiveReturnBackCameraIndicatorView;

@interface IESLiveReturnBackCameraRouterImpl : NSObject <IESLiveReferenceActions, IESLiveReturnBackCameraRouter>

@property (retain, nonatomic) IESLiveReturnBackCameraIndicatorView *indicatorView;
@property (retain, nonatomic) IESLiveReturnBackCameraStore *store;
@property (nonatomic) unsigned long long returnBackStyle;
@property (retain, nonatomic) NSMutableArray *backStores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HTSLiveRoom *backRoom;

+ (id)shared;

- (id)attachingDIContext;
- (void)clearStack;
- (void)returnBack;
- (double)returnBackIndicatorViewWidth;
- (void)didLeaveAudienceRoom;
- (BOOL)canRecordRoomCamera:(id)a0 room:(id)a1;
- (void)recordAsyncForCamera:(id)a0 room:(id)a1;
- (BOOL)canReturnBackCamera:(id)a0 room:(id)a1;
- (id)renderIndicatorView:(id)a0 needResetAnimation:(BOOL)a1;
- (BOOL)returnBackIndicatorShowing;
- (double)timeForKey:(id)a0 defaultValue:(double)a1;
- (double)newTimeForKey:(id)a0 defaultValue:(double)a1;
- (void)returnBackAction:(double)a0 trackContext:(id)a1;
- (BOOL)hasBeenRecordCamera:(id)a0 room:(id)a1;
- (BOOL)canReturnBackCameraWithRoom:(id)a0;
- (id)renderIndicatorViewWithTrackContext:(id)a0 clickAction:(id /* block */)a1 needResetAnimation:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)cameraID;
- (void)clearStore;

@end
