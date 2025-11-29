@class NSString;

@interface LSBindServiceImpl : NSObject <LSBindService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)observe:(id)a0 keyPath:(id)a1 host:(id)a2;
- (id)merge:(id)a0;
- (id)combineLatest:(id)a0;

@end
