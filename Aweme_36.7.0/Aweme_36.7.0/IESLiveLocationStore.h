@class IESLiveLocationApi;
@protocol IESLiveRoomService;

@interface IESLiveLocationStore : NSObject <IESLiveLocationAction>

@property (retain, nonatomic) IESLiveLocationApi *api;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)didSetAttachingDIContext;
- (void)openLocation;
- (BOOL)hasOpenLocation;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
