@class NSString, DUXActionSheetUIConfigModel, UIImage;

@interface DUXActionSheetItemModel : NSObject <IESIMActionSheetActionProtocol>

@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) DUXActionSheetUIConfigModel *uiConfig;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned long long use;
@property (copy, nonatomic) id /* block */ select;
@property (nonatomic) BOOL dismissShouldBeforeSelect;
@property (nonatomic) long long type;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long enlargeType;

- (id)initWithTitle:(id)a0 andSubtitle:(id)a1 andUseIsNormal:(BOOL)a2;
- (id)iesim_contentView;
- (void)iesim_setTitle:(id)a0;
- (void)iesim_setHandler:(id /* block */)a0;
- (void)iesim_setDismissShouldBeforeSelect:(BOOL)a0;
- (void)iesim_setContentHeight:(double)a0;
- (void)iesim_setContentViewUserInteractionEnabled:(BOOL)a0;
- (void)iesim_setAccessibilityDescription:(id)a0;
- (double)originHorizontalHeight;
- (id)initWithTitle:(id)a0 andSubtitle:(id)a1 andIconImage:(id)a2 andUseIsNormal:(BOOL)a3;
- (void).cxx_destruct;

@end
