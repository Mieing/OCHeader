@interface WCCentralManager : CBCentralManager

+ (BOOL)canSilientInitCentralManager;

- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1;

@end
