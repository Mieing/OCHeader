@class NSString;

@interface AWEUnBindAlertManager : NSObject <AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
