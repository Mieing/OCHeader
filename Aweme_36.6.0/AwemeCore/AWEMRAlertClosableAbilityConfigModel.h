@class NSArray, NSDictionary;

@interface AWEMRAlertClosableAbilityConfigModel : NSObject

@property (nonatomic) BOOL forceAlertDefaultEnable;
@property (copy, nonatomic) NSArray *disableCloseAbilityIDList;
@property (copy, nonatomic) NSDictionary *forceAlertExtraConfig;
@property (copy, nonatomic) NSArray *canBeClosedList;
@property (copy, nonatomic) NSDictionary *closableAlertExtraConfig;

+ (id)getCanBeClosedListDefaultList;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
