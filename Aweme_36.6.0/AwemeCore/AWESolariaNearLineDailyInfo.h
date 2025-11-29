@class NSString, NSDictionary;

@interface AWESolariaNearLineDailyInfo : NSObject

@property (copy, nonatomic) NSString *date;
@property (retain, nonatomic) NSDictionary *infoMap;

+ (id)modelCustomPropertyMapper;

- (id)initWithDate:(id)a0 infoMap:(id)a1;
- (void).cxx_destruct;

@end
