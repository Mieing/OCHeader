@class NSString;

@interface WCFinderScrollActionSheetDelegate : NSObject <MMScrollActionSheetDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;

@end
