@class NSDictionary;

@interface HMDHermasCounter : NSObject {
    struct HermasCounter { _Atomic unsigned long long x0; } *_counter;
}

@property (retain, nonatomic) NSDictionary *classMap;
@property (retain, nonatomic) NSDictionary *moduleNameMap;

+ (id)shared;

- (unsigned long long)generateSequenceCode:(id)a0;
- (struct HermasCounter { _Atomic unsigned long long x0; } *)initializeMMappFile;
- (void)resetSequenceCode;
- (unsigned long long)generateSequenceCodeWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
