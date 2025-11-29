@class NSDate;

@interface WCSelectTimeHalfScreenView : MMPageSheetBaseView

@property (retain, nonatomic) NSDate *miniumDate;
@property (retain, nonatomic) NSDate *maxiumDate;
@property (retain, nonatomic) NSDate *selectBeginDate;
@property (retain, nonatomic) NSDate *selectEndDate;
@property (copy, nonatomic) id /* block */ confirmCallBack;
@property (copy, nonatomic) id /* block */ cancelCallBack;

- (id)initWithTimeMin:(id)a0 max:(id)a1 selectBegin:(id)a2 selectEnd:(id)a3;
- (BOOL)checkDateValid;
- (void)setupDetailView;
- (void)onDone;
- (void)onSelectStatTime;
- (void)onSelectEndTime;
- (id)navigationRightButton;
- (void).cxx_destruct;

@end
