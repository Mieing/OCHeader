@class NSString;

@interface BDPMorePanelScreenRecordProvider : NSObject <BDPMorePanelItemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMorePanelItemsWithUniqueID:(id)a0;
+ (void)p_recordOperationActionWithItem:(id)a0 isStartRecord:(BOOL)a1 uniqueID:(id)a2;


@end
