@class NSString;

@interface SLITextYYTextLinePositionCenterModifier : NSObject <SLITextYYTextLinePositionModifier>

@property (nonatomic) long long mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modifyLines:(id)a0 fromText:(id)a1 inContainer:(id)a2;
- (struct CGSize { double x0; double x1; })fixupBoundingSize:(struct CGSize { double x0; double x1; })a0 layout:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
