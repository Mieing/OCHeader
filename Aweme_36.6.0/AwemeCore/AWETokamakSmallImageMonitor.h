@class NSArray;

@interface AWETokamakSmallImageMonitor : AWETokamakImageMonitor

@property (nonatomic) double threshold;
@property (retain, nonatomic) NSArray *whiteList;
@property (nonatomic) BOOL isTakeScaleIntoAccount;

- (void)receiveImageModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
