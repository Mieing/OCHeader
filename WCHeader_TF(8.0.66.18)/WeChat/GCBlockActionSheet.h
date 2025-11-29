@class NSString;

@interface GCBlockActionSheet : WCActionSheet <WCActionSheetDelegate>

@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
