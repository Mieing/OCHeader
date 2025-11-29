@class NSString, AWESearchPopInfo;

@interface AWESearchPopViewTask : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) AWESearchPopInfo *popInfo;
@property (copy, nonatomic) id /* block */ shouldShowPopView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithCloseCallback:(id /* block */)a0;
- (void)showToastMsg:(id)a0;
- (id)popID;
- (void)sendShowLog;
- (void)sendFailedLogWithErrorMsg:(id)a0;
- (void).cxx_destruct;

@end
