@class NSString;

@interface CJPayStyleLoadingConfig : JSONModel

@property (copy, nonatomic) NSString *dialogPreGif;
@property (copy, nonatomic) NSString *dialogCompleteSuccessGif;
@property (copy, nonatomic) NSString *panelPreGif;
@property (copy, nonatomic) NSString *panelCompleteSuccessGif;
@property (copy, nonatomic) NSString *dialogRepeatGif;
@property (copy, nonatomic) NSString *panelRepeatGif;
@property (copy, nonatomic) NSString *roundRepeatGif;
@property (copy, nonatomic) NSString *darkDialogRepeatGif;
@property (copy, nonatomic) NSString *darkPanelRepeatGif;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
