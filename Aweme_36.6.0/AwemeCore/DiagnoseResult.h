@interface DiagnoseResult : NSObject

@property (nonatomic) int maxValue;
@property (nonatomic) int avgValue;
@property (nonatomic) int overCount;

- (id)description;

@end
