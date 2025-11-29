@class NSString, WAWebViewController, NSObject;
@protocol OS_dispatch_queue, IWAWAGetA8KeyLogicHelper;

@interface WADetectSingleCodeResult : NSObject <WAWAGetA8KeyLogicHelperDelegate>

@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *charSet;
@property (copy, nonatomic) NSString *scanType;
@property (nonatomic) unsigned int codeVersion;
@property (copy, nonatomic) NSString *pagePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getA8KeyQueue;
@property (weak, nonatomic) WAWebViewController *webviewController;
@property (retain, nonatomic) id<IWAWAGetA8KeyLogicHelper> getA8KeyHelper;
@property (nonatomic) long long getA8KeyState;
@property (copy, nonatomic) id /* block */ getA8KeyCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toDictionary;
- (void)getA8KeyIfNeededWithCompletion:(id /* block */)a0;
- (void)workthread_getA8KeyIfNeededWithCompletion:(id /* block */)a0;
- (void)onWeappGetA8Key:(id)a0;
- (void)workthread_onWeappGetA8Key:(id)a0;
- (void).cxx_destruct;

@end
