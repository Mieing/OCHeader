@class NSString;

@interface MMFinderLiveLotteryMethodDataItem : NSObject

@property (nonatomic) unsigned long long cellStyle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *stateTitle;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) int attendType;

+ (id)initLotteryMethodDataItemWithCellStyle:(unsigned long long)a0 title:(id)a1 stateTitle:(id)a2 isSelect:(BOOL)a3 attendType:(int)a4;

- (double)getLotteryTableCellHeight;
- (void).cxx_destruct;

@end
