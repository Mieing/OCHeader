@class NSTimeZone, NSString, NSDate, BDPUniqueID;

@interface BDPDatePickerPluginModel : BDPBasePluginModel

@property (retain, nonatomic) NSTimeZone *timeZone;
@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSString *fields;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long pickerId;
@property (copy, nonatomic) NSString *confirmColor;
@property (copy, nonatomic) NSString *cancelColor;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL divider;
@property (copy, nonatomic) NSString *dividerColor;
@property (nonatomic) double toolbarBorderRadius;
@property (nonatomic) BOOL isLynx;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)stringFromDate:(id)a0;

@end
