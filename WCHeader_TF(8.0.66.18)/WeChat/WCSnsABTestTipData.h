@class NSString, NSMutableArray, WCSnsABTestTitle;

@interface WCSnsABTestTipData : NSObject

@property (retain, nonatomic) NSString *tipIndex;
@property (nonatomic) int showType;
@property (retain, nonatomic) NSMutableArray *arrActionItem;
@property (retain, nonatomic) WCSnsABTestTitle *abtestTitle;

- (id)init;
- (long long)compareTipAscending:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
