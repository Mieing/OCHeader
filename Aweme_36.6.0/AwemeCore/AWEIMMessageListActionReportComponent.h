@class AWEIMActionSheetItemModel, NSString;

@interface AWEIMMessageListActionReportComponent : AWEIMComponentBase <AWEIMMessageListActionReportInterface>

@property (retain, nonatomic) AWEIMActionSheetItemModel *reportItemModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)onReportItemTapped;
- (void).cxx_destruct;

@end
