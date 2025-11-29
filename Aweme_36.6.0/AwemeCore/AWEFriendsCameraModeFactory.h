@class NSNumber, NSMutableDictionary;

@interface AWEFriendsCameraModeFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *lazyModeMap;
@property (nonatomic) unsigned long long scene;
@property (readonly, nonatomic) long long landingModeID;
@property (retain, nonatomic) NSNumber *landingSubModeID;

- (id)featureModeArrayWithTabConfigs:(id)a0;
- (id)featureModeArray;
- (id)showFrameCornerModeIDArray;
- (id)socialCombinedMode;
- (id)pictureMode;
- (id)convertFromTabConfig:(id)a0;
- (id)modeForModeID:(long long)a0;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;
- (id)textMode;

@end
