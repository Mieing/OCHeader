@class NSNumber;

@interface RTVEffectGameResponseEndInfo : JSONModel

@property (retain, nonatomic) NSNumber *fromUserIdentifier;
@property (retain, nonatomic) NSNumber *terminateType;
@property (retain, nonatomic) NSNumber *gameRoomIdentifier;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
