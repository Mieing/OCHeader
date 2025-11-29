@class NSString;

@interface DUXPopoverPositionOffset : NSObject <IESIMPopoverPositionOffsetProtocol, ACCDUXPopoverPositionOffsetInstance>

@property (nonatomic) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double value;

+ (id)offsetWithDirection:(unsigned long long)a0 type:(unsigned long long)a1 value:(double)a2;

- (id)init;

@end
