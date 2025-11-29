@class NSString;

@interface IESLivePublicScreenLineModifier : NSObject <YYTextLinePositionModifier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modifyLines:(id)a0 fromText:(id)a1 inContainer:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
