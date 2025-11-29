@interface MMKDate : NSObject

@property (readonly, nonatomic) int year;
@property (readonly, nonatomic) int month;
@property (readonly, nonatomic) int day;

+ (id)KDateWithYear:(int)a0 month:(int)a1 day:(int)a2;

- (id)initWithYear:(int)a0 month:(int)a1 day:(int)a2;
- (id)description;

@end
