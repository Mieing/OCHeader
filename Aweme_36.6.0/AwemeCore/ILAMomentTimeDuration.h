@class NSString;

@interface ILAMomentTimeDuration : NSObject

@property (copy, nonatomic) NSString *start;
@property (copy, nonatomic) NSString *end;

- (id)initWithStrStart:(id)a0 end:(id)a1;
- (id)initWithStartValue:(id)a0 endValue:(id)a1;
- (id)initWithDateValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithStart:(id)a0 end:(id)a1;
- (id)initWithDate:(id)a0;

@end
