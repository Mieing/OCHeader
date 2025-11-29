@class NSMutableDictionary, NSCalendar, NSMutableArray;

@interface TextStateHistoryCalendar : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSMutableArray *privateSectionList;
@property (retain, nonatomic) NSMutableDictionary *idToSectionDict;
@property (retain, nonatomic) NSMutableArray *privateDayList;
@property (retain, nonatomic) NSMutableDictionary *idToDayDict;
@property (retain, nonatomic) NSMutableDictionary *idToInfoDict;
@property (nonatomic) unsigned long long currentYear;

- (id)init;
- (void)appendHistoryInfoList:(id)a0;
- (void)appendHistoryInfoList:(id)a0 isNew:(BOOL)a1;
- (void)updateSections;
- (id)sectionList;
- (id)dayList;
- (id)dayFromHistoryInfo:(id)a0;
- (unsigned long long)dayIndexFromHistoryInfo:(id)a0;
- (id)indexPathFromHistoryInfo:(id)a0;
- (id)historyInfoForIndexPath:(id)a0;
- (void)removeHistoryInfo:(id)a0;
- (id)infoForTextStateId:(id)a0;
- (void).cxx_destruct;

@end
