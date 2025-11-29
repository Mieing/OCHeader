@class NSString;

@interface MMFinderLiveGestureHandDetectionLuaMessageItemModel : NSObject

@property (nonatomic) long long luaObjectId;
@property (nonatomic) unsigned long long unixEpochTimestamp;
@property (retain, nonatomic) NSString *gestureId;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) double translationX;
@property (nonatomic) double translationY;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;

- (void).cxx_destruct;

@end
