@class NSMutableArray;

@interface TTVideoEngineMediaFitterInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *functionParams;
@property (nonatomic) unsigned long long headerSize;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long functionType;

- (unsigned long long)caclulateSizeDefaultFunc:(double)a0;
- (unsigned long long)caclulateSizeFunc2:(double)a0;
- (unsigned long long)calculateSizeBySecond:(double)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
