@class IESLiveInvisibleStore;

@interface IESLiveInvisibleFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveInvisibleStore *store;

+ (BOOL)isMixed;

- (void)componentCreate;
- (void)componentMount;
- (void).cxx_destruct;

@end
