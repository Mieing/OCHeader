@class NSString;

@interface IESGCPDetailBetaApplyButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (copy, nonatomic) NSString *applyUrl;
@property (copy, nonatomic) NSString *planID;
@property (nonatomic) BOOL isSupportIOSApply;
@property (copy, nonatomic) NSString *successToast;
@property (copy, nonatomic) NSString *applySuccessSchema;
@property (nonatomic) unsigned long long gamePlatform;
@property (copy, nonatomic) id /* block */ themeConfigDidChange;
@property (nonatomic) BOOL isApplied;

- (void)handleButtonDidClick;
- (void)updateContentData:(id)a0;
- (void)handleApplySuccessEvent;
- (void)HandleButtonClickEvent;
- (void)openApplySuccessSchemaWithExtra:(id)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)buttonStyle;

@end
