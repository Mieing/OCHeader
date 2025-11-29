@interface IESBridgePerfData : NSObject

@property (nonatomic) double preDispatchTS;
@property (nonatomic) double postDecodeTS;
@property (nonatomic) double preExecuteTS;
@property (nonatomic) double preCallbackTS;
@property (nonatomic) double postEncodeTS;
@property (nonatomic) double postCallbackTS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
