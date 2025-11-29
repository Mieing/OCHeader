@class NSString, UIView, BDPToolbarContext;

@interface BDPToolbarButtonCustomerProvider : NSObject <BDPToolbarButtonProtocol> {
    BDPToolbarContext *_toolbarContext;
    UIView *targetView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)couldShowNow:(id)a0;

- (void)onClickButton:(id)a0;
- (void)setupTargetView;
- (id)toolbarContext;
- (void)updateToolBarThemeStyle;
- (void)setToolbarContext:(id)a0;
- (void)openSchemaWithURL:(id)a0 uniqueID:(id)a1;
- (id)targetView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setTargetView:(id)a0;

@end
