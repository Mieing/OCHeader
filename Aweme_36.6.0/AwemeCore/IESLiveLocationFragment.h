@class IESLiveLocationStore;
@protocol IESLiveLocationService;

@interface IESLiveLocationFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveLocationStore *store;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;

- (void)componentCreate;
- (void)componentMount;
- (BOOL)hasOpenLocation;
- (void).cxx_destruct;

@end
