@class NSString, FavoritesItem, UIImage, MinimizeTaskData, NSMutableArray, WCScheduleItem;
@protocol MiniTaskCollectionCellViewModelDelegate;

@interface MiniTaskCollectionCellViewModel : MMObject

@property (nonatomic) BOOL hasNotifyUpdateSnapshot;
@property (retain, nonatomic) FavoritesItem *favItem;
@property (weak, nonatomic) id<MiniTaskCollectionCellViewModelDelegate> delegate;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *headerImageUrl;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSString *taskTitleTail;
@property (retain, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImage *headerDefaultImage;
@property (retain, nonatomic) NSMutableArray *titleStyle;
@property (retain, nonatomic) NSMutableArray *titleStyleForOneCell;
@property (retain, nonatomic) NSMutableArray *subtitleStyle;
@property (retain, nonatomic) NSMutableArray *subtitleStyleForOneCell;
@property (nonatomic) BOOL isOutdate;
@property (nonatomic) BOOL isCellVisible;
@property (nonatomic) BOOL showScheduleOptions;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (retain, nonatomic) WCScheduleItem *scheduleItem;
@property (retain, nonatomic) UIImage *snapshotImage;

+ (id)minimizeDataToModel:(id)a0;
+ (id)scheduleDataToModel:(id)a0;

- (void)updateOutdateState;
- (void)onMemoryWarning;
- (void)asyncLoadSnapshot:(id /* block */)a0;
- (void).cxx_destruct;

@end
