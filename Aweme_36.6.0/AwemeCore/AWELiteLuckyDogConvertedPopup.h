@class NSString;

@interface AWELiteLuckyDogConvertedPopup : NSObject <AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) id popup;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;
@property (copy, nonatomic) id /* block */ popupShowDialogHandler;
@property (nonatomic) BOOL popupShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithCloseCallback:(id /* block */)a0;
- (void)onAlertCanceled;
- (id)initWithPopup:(id)a0 priority:(long long)a1 showDialogHandler:(id /* block */)a2;
- (void)enqueue;
- (void).cxx_destruct;

@end
