@class NSString;

@interface EmoticonListUpdateEventCenterImpl : NSObject <EmoticonListUpdateEventCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)onEmoticonListUpdatedAsync:(unsigned long long)a0 type:(int)a1;

@end
