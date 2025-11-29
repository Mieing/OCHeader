@class NSString;

@interface AWEThemeChooseTimeModel : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSString *selectTime;
@property (retain, nonatomic) NSString *startTimeHour;
@property (retain, nonatomic) NSString *startTimeMin;
@property (retain, nonatomic) NSString *endTimeHour;
@property (retain, nonatomic) NSString *endTimeMin;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
