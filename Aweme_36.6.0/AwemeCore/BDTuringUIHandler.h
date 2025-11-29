@class NSString;
@protocol BDTuringUIHandler;

@interface BDTuringUIHandler : NSObject <BDTuringUIHandler>

@property (weak, nonatomic) id<BDTuringUIHandler> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showAlertWithTitle:(id)a0 message:(id)a1 options:(id)a2 onViewController:(id)a3;
- (void).cxx_destruct;

@end
