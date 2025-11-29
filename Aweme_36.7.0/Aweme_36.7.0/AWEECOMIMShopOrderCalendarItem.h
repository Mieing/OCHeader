@class NSNumber, NSDictionary, NSString;

@interface AWEECOMIMShopOrderCalendarItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSDictionary *data;
@property (readonly, copy, nonatomic) NSString *displayStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
