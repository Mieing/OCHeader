@class NSString;

@interface EmoticonPackageListUpdateEventCenterImpl : NSObject <EmoticonPackageListUpdateEventCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)onEmoticonPackageListUpdatedAsync:(unsigned long long)a0 type:(int)a1 productId:(id)a2;

@end
