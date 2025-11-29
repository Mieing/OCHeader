@class NSDate;

@interface ICCollectionStatInfo : NSObject

@property (retain, nonatomic) NSDate *firstScreenStartTime;
@property (retain, nonatomic) NSDate *firstScreenEndTime;

- (void)markFirstScreenStart;
- (void)markFirstScreenEnd;
- (double)firstScreenCost;
- (void)clear;
- (void).cxx_destruct;

@end
