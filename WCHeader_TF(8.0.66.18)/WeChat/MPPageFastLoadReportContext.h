@class NSArray;

@interface MPPageFastLoadReportContext : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSArray *itemList;
@property (nonatomic) unsigned int requestTimes;

- (id)description;
- (void).cxx_destruct;

@end
