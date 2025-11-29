@class NSMutableArray;

@interface TextStateHistoryCalendarItem : NSObject

@property (nonatomic) unsigned long long day;
@property (retain, nonatomic) NSMutableArray *privateInfoList;

+ (id)identifierFromDay:(unsigned long long)a0;

- (id)identifier;
- (id)initWithDay:(unsigned long long)a0;
- (void)insertInfoAtBegin:(id)a0;
- (void)appendInfo:(id)a0;
- (void)removeInfo:(id)a0;
- (id)infoList;
- (void).cxx_destruct;

@end
