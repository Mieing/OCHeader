@class NSMutableDictionary;

@interface MemSigManager : NSObject <NSCoding> {
    NSMutableDictionary *sigDict;
}

- (id)init;
- (void)dealloc;
- (void)addSig:(id)a0;
- (id)sigByName:(id)a0;
- (void)printSig;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
