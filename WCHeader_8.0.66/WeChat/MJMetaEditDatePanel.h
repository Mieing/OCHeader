@class NSDate, MJDatePickerView, MJSegmentViewModel;

@interface MJMetaEditDatePanel : UIViewController

@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (retain, nonatomic) MJDatePickerView *datePicker;
@property (readonly, nonatomic) NSDate *selectedDate;
@property (copy, nonatomic) id /* block */ dateDidChageHandler;

- (id)initWithSegmentVM:(id)a0;
- (void)setupViews;
- (void)setupDatas;
- (void)reloadData;
- (void).cxx_destruct;

@end
