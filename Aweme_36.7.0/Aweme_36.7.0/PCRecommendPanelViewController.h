@class NSDictionary, NSString;

@interface PCRecommendPanelViewController : UIViewController <DUXSheetDelegate>

@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)a0;
- (void).cxx_destruct;

@end
