@class NSArray, NSNumber, NSString;

@interface AWELuckyCatReservationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *calendarList;
@property (retain, nonatomic) NSNumber *toastType;
@property (copy, nonatomic) NSString *toastText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calendarListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
