@class NSString, FinderLiveLotteryMethodItem;

@interface MMFinderLiveCreateLotteryDataItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *stateTitle;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL isFromStaterVC;
@property (retain, nonatomic) FinderLiveLotteryMethodItem *lotteryMethodItem;

+ (id)initLotteryMethodDataItemWithTitle:(id)a0 stateTitle:(id)a1 isSelect:(BOOL)a2;

- (double)getLotteryTableCellHeight;
- (void).cxx_destruct;

@end
