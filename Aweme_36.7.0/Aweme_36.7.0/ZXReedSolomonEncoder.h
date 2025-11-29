@class NSMutableArray, ZXGenericGF;

@interface ZXReedSolomonEncoder : NSObject

@property (readonly, nonatomic) NSMutableArray *cachedGenerators;
@property (readonly, nonatomic) ZXGenericGF *field;

- (id)buildGenerator:(int)a0;
- (void)encode:(id)a0 ecBytes:(int)a1;
- (void).cxx_destruct;
- (id)initWithField:(id)a0;

@end
