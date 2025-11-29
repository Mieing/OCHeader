@class UIButton, NSString;
@protocol ACCRecorderViewContainer, ACCRecordTemplateVideoPreviewService;

@interface ACCRecordTemplateVideoPreviewBarItemComponent : ACCFeatureComponent <ACCRecordTemplateVideoPreviewBarItemService>

@property (retain, nonatomic) UIButton *barItemButton;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ needShowBlock;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordTemplateVideoPreviewService> templateVideoPreviewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)updateSelected:(BOOL)a0;
- (void)updateDisabled:(BOOL)a0;
- (void)configBarItem;
- (void)barItemClicked;
- (void)configClickAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateAccessibilityLabel;

@end
