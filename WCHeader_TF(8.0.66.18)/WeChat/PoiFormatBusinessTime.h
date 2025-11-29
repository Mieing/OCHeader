@class NSString, NSMutableArray;

@interface PoiFormatBusinessTime : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *dateBegin;
@property (retain, nonatomic) NSString *dateEnd;
@property (retain, nonatomic) NSMutableArray *times;
@property (retain, nonatomic) NSMutableArray *weekDays;
@property (retain, nonatomic) NSMutableArray *months;
@property (retain, nonatomic) NSString *special;
@property (nonatomic) BOOL isDefault;

+ (void)initialize;

@end
