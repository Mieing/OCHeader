@class NSString;

@interface MMFinderLiveLotteryGetPrizeMethodDataItem : NSObject

@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic) unsigned int index;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *stateTitle;
@property (nonatomic) BOOL isSelect;

+ (id)initLotteryMethodDataItemWithCellStyle:(unsigned long long)a0 title:(id)a1 stateTitle:(id)a2 isSelect:(BOOL)a3;

- (double)getLotteryTableCellHeight;
- (void).cxx_destruct;

@end
