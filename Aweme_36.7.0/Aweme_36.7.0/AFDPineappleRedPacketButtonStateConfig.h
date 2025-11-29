@class NSString, NSNumber;

@interface AFDPineappleRedPacketButtonStateConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorStr;
@property (copy, nonatomic) NSString *backgroundColorStr;
@property (copy, nonatomic) NSNumber *needsIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
