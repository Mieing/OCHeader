@class NSString;
@protocol IESLLPopoverDelegate;

@interface IESLLPopoverDelegateAdapter : NSObject <DUXPopoverDelegate>

@property (weak, nonatomic) id<IESLLPopoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)popoverDidAppear:(id)a0;
- (void).cxx_destruct;
- (void)popoverWillAppear:(id)a0;
- (id)initWithSourceDelegate:(id)a0;

@end
