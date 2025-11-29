@class NSString;

@interface AWESolariaNearLineDailyItem : AWESolariaNearLineBaseInfoItem

@property (copy, nonatomic) NSString *date;

- (void)fromJSON:(id)a0;
- (id)toDailyInfo;
- (void).cxx_destruct;
- (id)init;
- (void)merge:(id)a0;
- (id)toJSON;

@end
