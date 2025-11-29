@class NSString;

@interface DitoComponentAgent : NSObject <DitoComponentAgent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createView:(id)a0;
- (id)createViewModelWithNode:(id)a0;

@end
