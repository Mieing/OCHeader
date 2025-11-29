@class NSString, NSDictionary;

@interface AWESearchSynthesisNovelTracker : NSObject

@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (nonatomic) BOOL toolBarShowHasTracked;

- (void)trackToolBarShow;
- (void)trackToolBarClick:(id)a0;
- (void)trackCatalogShow;
- (void)trackCatalogClick:(id)a0;
- (void)trackProgressDialogShow;
- (void)trackProgressDialogClick:(id)a0;
- (void)trackWebTranscodeFail:(int)a0;
- (void)trackWebNovelPageShow:(id)a0;
- (void)trackReaderContentPageShow:(double)a0 isPreload:(BOOL)a1;
- (void).cxx_destruct;

@end
