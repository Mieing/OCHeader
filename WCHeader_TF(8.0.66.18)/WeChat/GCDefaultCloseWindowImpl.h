@class NSString, MMPageSheetAdapter;

@interface GCDefaultCloseWindowImpl : NSObject <MMWebViewPresetUIChildViewDelegate, MMPageSheetAdapterDelegate>

@property (copy, nonatomic) id /* block */ onCloseBlock;
@property (weak, nonatomic) MMPageSheetAdapter *weakPageAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
