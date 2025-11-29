@class NSString, AWELiveRoomOptions, AWELiveRoomPullDataDisplay, AWELiveRoomExtension;

@interface AWELiveRoomPullData : AWEBaseApiModel

@property (retain, nonatomic) AWELiveRoomOptions *options;
@property (copy, nonatomic) NSString *streamData;
@property (nonatomic) int kind;
@property (retain, nonatomic) AWELiveRoomExtension *extension;
@property (retain, nonatomic) AWELiveRoomPullDataDisplay *display;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithPullData:(id)a0;
- (id)livePullData;
- (void).cxx_destruct;

@end
