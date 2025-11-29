@class NSString;

@interface WAOverseaPrivacyConfirmLogic : NSObject <ServiceAuthExt>

@property (copy, nonatomic) id /* block */ completeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNeedOverseaPrivacyConfirm;

@end
