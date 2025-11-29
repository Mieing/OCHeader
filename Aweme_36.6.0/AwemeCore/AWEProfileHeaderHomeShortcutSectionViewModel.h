@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderHomeShortcutSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderHomeShortcutSectionProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double topPadding;
@property (nonatomic) double profileInfoCompletePercent;
@property (nonatomic) BOOL hidePercentWhenCompleted;
@property (nonatomic) BOOL languageDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (void)p_languageDidChange;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
