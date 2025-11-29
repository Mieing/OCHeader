@class NSString, NSMutableDictionary, UISwitch, UIView, MMTableViewInfo;

@interface WeixinOpenServiceViewController : MMUIViewController <ServiceAuthExt, ILinkEventExt> {
    struct map<unsigned long, OpenServiceRowType, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, OpenServiceRowType>>> { struct __tree<std::__value_type<unsigned long, OpenServiceRowType>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, OpenServiceRowType>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, OpenServiceRowType>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, OpenServiceRowType>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, OpenServiceRowType>, std::less<unsigned long>>> { unsigned long long __value_; } __pair3_; } __tree_; } m_mapRowToRowType;
    NSMutableDictionary *m_dictToLink;
    UISwitch *m_searchSwitch;
}

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (retain, nonatomic) UIView *tableFooterView;
@property (retain, nonatomic) UIView *confirmView;
@property (nonatomic) unsigned long long userType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithUserType:(unsigned long long)a0;
- (void)initDict;
- (void)initRowType;
- (void)initTableHeaderView;
- (void)initTableFooterView;
- (void)initConfirmView;
- (void)viewDidLoad;
- (void)reloadTableData;
- (id)makeSwitchCellWithRow:(unsigned long long)a0;
- (BOOL)getSwitchStatus:(unsigned long long)a0;
- (void)onSwitchChanged_1:(id)a0;
- (void)onSwitchChanged_2:(id)a0;
- (void)onSwitchChanged_3:(id)a0;
- (void)onSwitchChanged_4:(id)a0;
- (void)onSwitchChanged_5:(id)a0;
- (void)onSwitchChanged:(id)a0 rowType:(long long)a1;
- (void)onCloseBtnClick;
- (void)onFinishBtnClick;
- (void)sendCloseAllRequest;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onCloseService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)navigationBarBackgroundColor;
- (unsigned long long)convertFromOpenServiceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
