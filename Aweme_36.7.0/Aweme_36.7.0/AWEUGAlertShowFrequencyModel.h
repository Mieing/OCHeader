@class NSString;

@interface AWEUGAlertShowFrequencyModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showTimeInterval;
@property (nonatomic) long long showTimesInDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
