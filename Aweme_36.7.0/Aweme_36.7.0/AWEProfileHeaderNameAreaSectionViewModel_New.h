@class NSString, AWEProfileHeaderNameAreaComponent_NEWAPI, AWEProfileHeaderContext, AWERLComponentContainer;

@interface AWEProfileHeaderNameAreaSectionViewModel_New : AWEBaseListSectionViewModel <AWEUserMessage, AWEProfileHeaderSectionViewModelProtocol>

@property (nonatomic) double maxWidth;
@property (nonatomic) double footerHeight;
@property (nonatomic) double previousScreenWidth;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEProfileHeaderNameAreaComponent_NEWAPI *nameAreaComponentNEWAPI;
@property (retain, nonatomic) AWERLComponentContainer *componentTree;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sectionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (id)padService;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (double)sectionWidth;
- (void)refreshSection;
- (void)updateMaxWidth;
- (void)setupComponentTree;
- (void)updateComponentTree;
- (void)computeFitSizeIfNeeded;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (double)sectionHeight;

@end
