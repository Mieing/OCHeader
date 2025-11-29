@class BDPCDDynamicCardUIPropsTextModel, NSString, BDPCDDynamicCardUIElementModel, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardUIPropsBaseButtonModel : BDPCDDynamicCardUIPropsModel

@property (retain, nonatomic) BDPCDDynamicCardUIElementModel *uiElementModel;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) BDPCDDynamicCardUIPropsTextModel *label;
@property (copy, nonatomic) NSString *buttonKey;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *onClick;

- (id)initWithUIElementModel:(id)a0;
- (void)setupPropertiesWithWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
