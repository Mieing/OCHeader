@class NSString, WCPaySelectDateItem, MMKDatePickerViewOnSelectCallback;

@interface KindaDatePickerView : KindaView <WCBaseInfoItemDelegate, MMKDatePickerView> {
    long long m_type;
    MMKDatePickerViewOnSelectCallback *m_onSelectCallback;
}

@property (retain) WCPaySelectDateItem *dateItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setValue:(id)a0;
- (id)getValue;
- (void)setOnSelectCallback:(id)a0;
- (void)setType:(long long)a0;
- (long long)getType;
- (long long)nowYear;
- (void)setStartYear:(long long)a0 endYear:(long long)a1 beginYear:(long long)a2;
- (void)setOriginDate:(int)a0 month:(int)a1 day:(int)a2;
- (void)setHint:(id)a0;
- (void)setStartDate:(id)a0;
- (void)setEndDate:(id)a0;
- (id)getSelectedDate;
- (id)getStartDate;
- (id)getEndDate;
- (void)setCanBeLongTerm:(BOOL)a0;
- (BOOL)getCanBeLongTerm;
- (int)yearOfNow;
- (long long)timeForDate:(id)a0;
- (id)currentDate;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void).cxx_destruct;

@end
