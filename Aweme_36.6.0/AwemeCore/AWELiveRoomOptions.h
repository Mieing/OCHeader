@class NSArray, AWELiveRoomQuality;

@interface AWELiveRoomOptions : AWEBaseApiModel

@property (retain, nonatomic) AWELiveRoomQuality *defaultQuality;
@property (retain, nonatomic) NSArray *qualities;
@property (nonatomic) BOOL vpassDefault;

- (id)liveOptions;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
