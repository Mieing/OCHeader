@class NSString;

@interface AWEACCRTLImpl : NSObject <ACCRTLProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableRTL;
- (void)disableOperationsCollectionForAttributedString:(id)a0;
- (void)setRTLTypeWithView:(id)a0 type:(unsigned long long)a1;
- (void)obj:(id)a0 addRTLExecuteBlock:(id /* block */)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })accrtl_basicTransformFor:(id)a0;
- (void)set_awertlAlignmentWithTextView:(id)a0 alignment:(long long)a1;
- (BOOL)isRTL;

@end
