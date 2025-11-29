@class NSString;

@interface IESGCPDetailTitleTestGameApplyButtonViewModel : IESGCPDetailBaseViewModel

@property (copy, nonatomic) NSString *planID;
@property (copy, nonatomic) NSString *applyUrl;
@property (nonatomic) BOOL isApplied;
@property (nonatomic) BOOL isSupportIOSApply;
@property (copy, nonatomic) NSString *successToast;
@property (nonatomic) unsigned long long state;

- (void)HandleButtonClickEvent;
- (id)titleTestGameApplyButtonThemeConfigWithState:(unsigned long long)a0;
- (void)applyButtonDidClick;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
