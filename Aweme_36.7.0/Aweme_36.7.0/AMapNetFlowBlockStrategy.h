@class NSString, NSNumber;

@interface AMapNetFlowBlockStrategy : NSObject

@property (nonatomic) long long minSecond;
@property (nonatomic) long long maxSecond;
@property (nonatomic) double inPercent;
@property (readonly, nonatomic) NSString *begin;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *percent;
@property (retain, nonatomic) id userInfo;

- (BOOL)isHitStrateg;
- (void)parserStrategy;
- (id)initWithBegin:(id)a0 duration:(id)a1 percent:(id)a2;
- (void).cxx_destruct;

@end
