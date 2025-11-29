@interface AWENearbyHalfScreenContainerPerfModel : NSObject

@property (nonatomic) double containerInitTime;
@property (nonatomic) double containerCost;
@property (nonatomic) double halfScreenInitTime;
@property (nonatomic) double halfScreenCost;
@property (nonatomic) double contentInitTime;
@property (nonatomic) double contentCost;
@property (nonatomic) double fmpTime;
@property (nonatomic) double totalCost;
@property (nonatomic) unsigned long long enterType;

- (id)init;

@end
