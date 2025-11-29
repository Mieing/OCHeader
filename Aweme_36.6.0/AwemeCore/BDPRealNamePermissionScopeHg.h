@class UITextView, NSString, BDPCheckBox, BDPIndicatorView;

@interface BDPRealNamePermissionScopeHg : NSObject <BDPPermissionScopeEntityProtocol> {
    BDPIndicatorView *_indicatorView;
}

@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UITextView *protocolView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } authenticationRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } serviceRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (long long)freeType;
- (id)title:(id)a0;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)a0;
- (id)brief:(id)a0;
- (id)briefDesc:(id)a0;
- (id)desc:(id)a0;
- (void)forceRequestPermission:(id)a0 completion:(id /* block */)a1;
- (void)footerView:(id)a0 completion:(id /* block */)a1;
- (void)contentView:(id)a0 completion:(id /* block */)a1;
- (void)preCheck:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkBeforeClickConfirm;
- (void)protocolAction:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (id)confirmButtonText;

@end
