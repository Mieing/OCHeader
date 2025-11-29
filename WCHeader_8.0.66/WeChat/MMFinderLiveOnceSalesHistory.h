@class NSDate;

@interface MMFinderLiveOnceSalesHistory : NSObject

@property (nonatomic) unsigned long long sales;
@property (retain, nonatomic) NSDate *date;

+ (id)nowWithSales:(unsigned long long)a0;

- (void).cxx_destruct;

@end
