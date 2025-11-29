@class NSString, AWELiveRoomClip;

@interface AWELiveRoomExtension : AWEBaseApiModel

@property (retain, nonatomic) AWELiveRoomClip *gameClip;
@property (retain, nonatomic) AWELiveRoomClip *cameraClip;
@property (retain, nonatomic) AWELiveRoomClip *cameraClipCustom;
@property (nonatomic) int cameraVerticalType;
@property (nonatomic) int cameraHorizontalType;
@property (nonatomic) int cameraHidden;
@property (nonatomic) int gameHidden;
@property (nonatomic) int displayModel;
@property (nonatomic) int layout;
@property (copy, nonatomic) NSString *gameRoomID;
@property (copy, nonatomic) NSString *ts;

+ (id)parseWithOrigin:(id)a0;
+ (id)gameClipJSONTransformer;
+ (id)cameraClipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)liveExtension;
- (id)initWithRoomExtension:(id)a0;
- (void).cxx_destruct;

@end
