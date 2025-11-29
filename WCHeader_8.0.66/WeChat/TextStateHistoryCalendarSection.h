@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface TextStateHistoryCalendarSection : NSObject

@property (nonatomic) unsigned long long year;
@property (nonatomic) unsigned long long month;
@property (nonatomic) BOOL isLastMonthOfYear;
@property (retain, nonatomic) NSMutableDictionary *keyToItemDict;
@property (retain, nonatomic) NSMutableIndexSet *dayIndexes;
@property (retain, nonatomic) NSMutableDictionary *iconIdToCountDict;
@property (retain, nonatomic) NSMutableDictionary *customDescriptionToCountDict;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } dayRange;

+ (id)identifierFromYear:(unsigned long long)a0 month:(unsigned long long)a1;

- (id)identifier;
- (id)initWithYear:(unsigned long long)a0 month:(unsigned long long)a1;
- (id)topUseDescription;
- (void)appendInfo:(id)a0 day:(unsigned long long)a1;
- (void)removeInfo:(id)a0 itemIndex:(unsigned long long)a1;
- (id)itemForDay:(unsigned long long)a0;
- (void).cxx_destruct;

@end
