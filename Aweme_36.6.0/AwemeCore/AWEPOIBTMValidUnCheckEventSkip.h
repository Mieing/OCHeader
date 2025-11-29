@class NSString;

@interface AWEPOIBTMValidUnCheckEventSkip : NSObject <AWEPOISkipCheckProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)judgeIsSkipCheckWithEvent:(id)a0 params:(id)a1;
- (BOOL)rejectByFilterWithConfig:(id)a0 params:(id)a1;

@end
