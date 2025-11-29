@class DUXBottomNotification, NSString, AWECodeGenV1OrderToolBarResp;

@interface AWEOrderCenterSnackBarService : HTSService <AWEOrderCenterSnackBarService>

@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ trackExtraBuild;
@property (retain, nonatomic) AWECodeGenV1OrderToolBarResp *toolBarRespModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOrderCenterSnackBarIfNeed:(long long)a0 trackExtraBuild:(id /* block */)a1;
- (double)requestUpperTimeLimit;
- (void)openHomepageSideBar;
- (id)orderTypeToTrackString:(long long)a0;
- (double)requestLowerTimeLimit;
- (void).cxx_destruct;

@end
