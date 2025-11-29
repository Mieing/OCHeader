@class NSString;

@interface IESLatchRuleConfigResolver : NSObject <IESLatchConfigResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveConfig:(id)a0 bag:(id)a1 withEvent:(id)a2;
- (id)resolveRule:(id)a0 bag:(id)a1 withEvent:(id)a2;
- (id)resolveItem:(id)a0;
- (id)resolveQuery:(id)a0;
- (id)resolveRule:(id)a0;

@end
