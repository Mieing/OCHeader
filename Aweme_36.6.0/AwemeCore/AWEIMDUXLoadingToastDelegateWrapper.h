@class NSString;
@protocol IESIMLoadingToastDelegate;

@interface AWEIMDUXLoadingToastDelegateWrapper : NSObject <DUXLoadingToastDelegate>

@property (weak, nonatomic) id<IESIMLoadingToastDelegate> loadingToastDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
