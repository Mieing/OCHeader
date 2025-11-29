@class NSNumber, NSString;

@interface IESOuterTestTFExpireCheckResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *expireTime;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertDesc;
@property (nonatomic) long long alertStyle;
@property (retain, nonatomic) NSNumber *freqControlHours;
@property (retain, nonatomic) NSNumber *freqControlCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
