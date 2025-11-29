@class NSString, NSMutableArray;

@interface __RTVCustomPopoverSheetControllerDataBuilder : NSObject <RTVCustomPopoverSheetControllerDataBuilder>

@property (readonly, nonatomic) NSMutableArray *cellModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 handler:(id /* block */)a3;
- (void)addActionWithImage:(id)a0 title:(id)a1 handler:(id /* block */)a2;
- (void)addSwitchWithImage:(id)a0 title:(id)a1 isOn:(BOOL)a2 handler:(id /* block */)a3;
- (void)addBlankSplitWithHeight:(double)a0;
- (id)cellModels;
- (void).cxx_destruct;
- (id)init;

@end
