@class NSMutableArray;

@interface TextStateHistoryDay : NSObject

@property (nonatomic) unsigned long long year;
@property (nonatomic) unsigned long long month;
@property (nonatomic) unsigned long long day;
@property (retain, nonatomic) NSMutableArray *privateInfoList;

+ (id)identifierFromYear:(unsigned long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2;

- (id)initWithYear:(unsigned long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2;
- (id)infoList;
- (void)insertInfoAtBegin:(id)a0;
- (void)insertInfoAtEnd:(id)a0;
- (void)removeInfo:(id)a0;
- (id)identifier;
- (void).cxx_destruct;

@end
