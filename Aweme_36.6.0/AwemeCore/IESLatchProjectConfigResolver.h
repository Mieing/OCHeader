@class NSString;

@interface IESLatchProjectConfigResolver : NSObject <IESLatchConfigResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveConfig:(id)a0 bag:(id)a1 withEvent:(id)a2;

@end
