@class NSString;

@interface IESLatchAPIConfigResolver : NSObject <IESLatchConfigResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveAPI:(id)a0 forName:(id)a1;
- (id)resolveParams:(id)a0 forName:(id)a1;
- (id)resolveConfig:(id)a0 bag:(id)a1 withEvent:(id)a2;

@end
