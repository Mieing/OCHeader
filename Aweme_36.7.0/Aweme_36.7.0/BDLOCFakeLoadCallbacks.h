@class NSString;

@interface BDLOCFakeLoadCallbacks : NSObject <BDLiveOpenContainerResourceLoadProtocol>

@property (copy, nonatomic) id /* block */ callBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFailToRequestMeta:(id)a0;
- (void)didFailToDownload:(id)a0;
- (void)didActivateWithPath:(id)a0;
- (void)didFailToActivate:(id)a0;
- (void).cxx_destruct;
- (id)initWithCallBack:(id /* block */)a0;

@end
