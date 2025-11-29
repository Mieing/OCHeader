@class NSString, NSMutableArray;

@interface BTMissedSubsReaderItemViewModel : BTBaseRecommendAppMsgCellViewModel

@property (retain, nonatomic) NSMutableArray *titleArrStyles;
@property (readonly, nonatomic) NSString *contentUrl;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) double titleLimitWidth;
@property (readonly, nonatomic) unsigned long long titleLimitLineNum;

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;

- (id)itemViewClassName;
- (id)coverUrl;
- (BOOL)isShowLargeCover;
- (void).cxx_destruct;

@end
