@class NSString, NSMutableDictionary, WCSnsABTestTipData, ABTestItem;

@interface WCSnsABTestInfo : NSObject

@property (retain, nonatomic) ABTestItem *abtestItem;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned long long experType;
@property (retain, nonatomic) NSMutableDictionary *dicTipData;
@property (retain, nonatomic) WCSnsABTestTipData *firstTipData;

- (id)init;
- (void).cxx_destruct;

@end
