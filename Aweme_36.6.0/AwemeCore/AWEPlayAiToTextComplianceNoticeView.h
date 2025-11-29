@class DUXInfoPanel, NSString, DUXContentSheet;

@interface AWEPlayAiToTextComplianceNoticeView : UIView <DUXSheetDelegate>

@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) DUXInfoPanel *infoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowComplianceNoticeWithModel:(id)a0;
+ (BOOL)shouleShowComplianceNoticeEntranceWithModel:(id)a0;

- (void)dismissComplianceNoticeView;
- (void)showComplianceNoticeView;
- (void).cxx_destruct;

@end
