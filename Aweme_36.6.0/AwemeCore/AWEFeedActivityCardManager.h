@class NSString;

@interface AWEFeedActivityCardManager : NSObject <AWEFeedDynamicCardManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 beforeUpdateData:(id)a1 extraParams:(id)a2;

@end
