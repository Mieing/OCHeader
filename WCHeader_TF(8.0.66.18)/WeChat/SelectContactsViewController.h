@class NSString, NSMutableDictionary, UIView, ContactSelectView;
@protocol SelectContactsViewControllerDelegate;

@interface SelectContactsViewController : MMUIViewController <SelectContactsViewControllerDelegate, ContactSelectViewDelegate, SelectOpenIMContactsViewControllerDelegate> {
    UIView *m_titleView;
    ContactSelectView *m_selectView;
}

@property (weak, nonatomic) id<SelectContactsViewControllerDelegate> m_delegate;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSString *m_nsViewControllerTitle;
@property (retain, nonatomic) NSMutableDictionary *dicExistContact;
@property (nonatomic) BOOL enableInteractiveDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)shouldInteractiveDismiss;
- (void)onCancelBack:(id)a0;
- (void)initTitleArea;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)onSelectOpenIMContactReturn:(id)a0;
- (void)onSelectBrandSubscriptContact;
- (void)onSelectBrandServiceContact;
- (void)onSelectOpenIMGroup;
- (void)onSelectContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (BOOL)hideFavourContactCandidate;
- (id)getSafeSearchViewController;
- (void)onExistContactDidSelected:(id)a0;
- (void).cxx_destruct;

@end
