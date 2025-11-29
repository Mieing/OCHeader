@class NSDateComponents, NSDate, MMTableViewInfo, UIButton, NSCalendar, NSString, MMCommonActionSheetPicker, CalendarWeeklyView, CalendarYearMonthDate, CBaseContact, NSArray, MMListYearMonthFlowView, UIImage;
@protocol MMUIViewControllerDelegate;

@interface ChatMsgCalendarViewController : MMUIViewController <MMTableViewInfoDelegate, MMListYearMonthFlowViewDelegate, MMCommonActionSheetPickerDelegate> {
    CBaseContact *m_oContact;
    MMTableViewInfo *m_tableViewInfo;
    NSCalendar *m_gregorian;
    NSCalendar *m_chinese;
    UIImage *m_backImg;
    UIImage *m_normalImg;
    NSDate *m_lastDatePreMonth;
    NSDateComponents *m_firstMsgDateComponents;
    NSDateComponents *m_lastMsgDateComponents;
    NSDateComponents *m_currentMsgDateComponents;
    CalendarYearMonthDate *m_selectYearMonth;
    BOOL m_bEnd;
    UIButton *m_lastSelectItem;
    BOOL m_bToday;
    BOOL m_bNewYearsEve;
    CalendarWeeklyView *m_weekView;
}

@property (retain, nonatomic) MMListYearMonthFlowView *yearMonthFlowView;
@property (retain, nonatomic) MMCommonActionSheetPicker *yearMonthPickerView;
@property (retain, nonatomic) NSArray *yearsData;
@property (retain, nonatomic) NSArray *monthsDatas;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChat:(id)a0;
- (void)onBackButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)makeWeekView;
- (void)makeWeeklyLineCell:(id)a0 CellInfo:(id)a1;
- (id)getDateFromEra:(long long)a0 year:(long long)a1 month:(long long)a2 day:(long long)a3;
- (void)makeMonthlyViewWithDate:(id)a0;
- (void)makeMonthlyViewWithDate:(id)a0 isNeedReloadData:(BOOL)a1;
- (id)getViewController;
- (void)onSelectDate:(id)a0;
- (id)getDetailForDay:(long long)a0 Month:(long long)a1 Year:(long long)a2;
- (id)makeWeeklyLineView:(long long *)a0 WeekDay:(long long)a1 thisMonthComponent:(id)a2;
- (BOOL)shouldLoadNextMonth;
- (void)loadNextMonthIfNeeded:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)hasMsgDay:(long long)a0 Month:(long long)a1 Year:(long long)a2;
- (void)getNextDateComponents;
- (id)genDateComponentsWithDate:(id)a0;
- (void)scrollToSessionWithYear:(long long)a0 month:(long long)a1;
- (void)scrollToSessionWithIndex:(id)a0;
- (void)resetTableViewContentInset;
- (id)getFirstSectionHeaderView;
- (double)getSesessionTopInTable:(unsigned int)a0;
- (void)initYearFloatView;
- (id)getFirstVisibleCellIndexPath;
- (void)updateYearMonthFlowView;
- (void)updateYearMonthFlowViewTitle:(long long)a0 month:(long long)a1;
- (void)initDateComponents;
- (void)handleDidClickYearMonthFlowLabel:(id)a0 month:(id)a1;
- (void)updateYearMonthPicker:(id)a0 month:(id)a1;
- (void)tryCalcYearMonthPickerViewData;
- (void)calcYearMonthPickerViewData;
- (void)listYearMonthFlowViewDidClickLabel:(id)a0;
- (void)commonPickerConfirm:(id)a0;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void).cxx_destruct;

@end
