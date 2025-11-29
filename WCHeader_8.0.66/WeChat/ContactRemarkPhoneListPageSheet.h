@class NSArray, MMUIView;

@interface ContactRemarkPhoneListPageSheet : MMPageSheetBaseView {
    NSArray *m_arrPhone;
}

@property (retain, nonatomic) MMUIView *containerView;

- (id)initWithArrPhone:(id)a0;
- (void)initConfig;
- (void)initView;
- (id)genPhoneItemView:(id)a0;
- (void)tryCopy:(id)a0;
- (void)tryCall:(id)a0;
- (void).cxx_destruct;

@end
