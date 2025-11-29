@class NSDictionary, NSString;

@interface IESLiveNotifyEffectFrequencyConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long timeGap;
@property (nonatomic) long long maxNumInTimeSlice;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
