@class WCPaySelectCountItem, MMKCountPickerViewOnSelectCallback, NSString;

@interface KindaCountPickerView : KindaView <WCBaseInfoItemDelegate, MMKCountPickerView>

@property (retain, nonatomic) WCPaySelectCountItem *countItem;
@property (retain, nonatomic) MMKCountPickerViewOnSelectCallback *callback;
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
- (void)setDefaultCount:(int)a0;
- (void)WCBaseInfoItemEndEdit:(id)a0;
- (void).cxx_destruct;

@end
