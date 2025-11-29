@class NSString, UIFont, MJVideoTemplate;

@interface WCFinderVideoProducerTemplateCellViewModel : NSObject <WCFinderVideoProducerLoadMoreViewModelProtocol>

@property (retain, nonatomic) MJVideoTemplate *mjVideoTemplate;
@property (nonatomic) double changingTemplateProgress;
@property (retain, nonatomic) UIFont *cachedTemplateNameScaledFont;
@property (retain, nonatomic) UIFont *cachedSelectedTemplateNameScaledFont;
@property (retain, nonatomic) NSString *cachedPreviewAnimFilePath;
@property (nonatomic) long long cellType;
@property (nonatomic) long long selectedStyle;
@property (nonatomic) BOOL isFocused;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long cellOrder;
@property (nonatomic) BOOL canShowProgressMaskView;
@property (nonatomic) BOOL isChangingTemplate;
@property (nonatomic) BOOL isLoadMoreCell;
@property (nonatomic) unsigned long long initialStateForLoadMoreCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdForType:(long long)a0;
+ (long long)cellTypeFromId:(id)a0;
+ (struct CGSize { double x0; double x1; })cellViewSizeForType:(long long)a0;

- (id)initWithMJVideoTemplate:(id)a0;
- (void)bindByCellView:(id)a0;
- (BOOL)isCellTypeSelectable;
- (BOOL)isCellTypeSupportedForPreviewAnimation;
- (void)videoProducerViewModel:(id)a0 changeTemplateWillStart:(id)a1;
- (void)videoProducerViewModel:(id)a0 changeTemplateInfo:(id)a1 completeSuccess:(BOOL)a2;
- (void)videoProducerViewModel:(id)a0 changeTemplateInfo:(id)a1 progress:(double)a2;
- (void).cxx_destruct;

@end
