@class NSString, NSArray, NSDictionary;

@interface AWEClientABRegisterModel : NSObject

@property (nonatomic) unsigned long long valueType;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *experKey;
@property (copy, nonatomic) NSArray *groupIDs;
@property (copy, nonatomic) NSArray *flowRates;
@property (copy, nonatomic) NSArray *experValues;
@property (copy, nonatomic) id defaultValue;
@property (copy, nonatomic) NSDictionary *filters;

- (void).cxx_destruct;

@end
