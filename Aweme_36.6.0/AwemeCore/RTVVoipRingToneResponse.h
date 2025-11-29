@class NSNumber, NSString;

@interface RTVVoipRingToneResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *errCode;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *errTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
