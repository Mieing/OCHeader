@class UIStackView, NSArray, NSString, BDPMorePanelSingleLinePage;

@interface BDPMorePanelDoubleLinePage : UIView <BDPMorePanelPage> {
    BDPMorePanelSingleLinePage *_topPage;
    BDPMorePanelSingleLinePage *_bottomPage;
    UIStackView *_stackView;
}

@property (copy, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)capacity;

- (BOOL)abTestOnForShareItemMenu;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateItems:(id)a0;

@end
