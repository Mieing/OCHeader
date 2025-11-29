@class NSString;

@interface HTSLiveCompoundGiftItemFactory : NSObject <HTSLiveGiftItemFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemFromModel:(id)a0 attachingDIContext:(id)a1;

@end
