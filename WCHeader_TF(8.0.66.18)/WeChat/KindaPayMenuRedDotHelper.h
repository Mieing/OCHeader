@class NSString;

@interface KindaPayMenuRedDotHelper : NSObject <MMKPayMenuRedDotHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getRedDotItemWithRedDotId:(id)a0;
- (void)clearPayMenuRedDot:(id)a0;

@end
