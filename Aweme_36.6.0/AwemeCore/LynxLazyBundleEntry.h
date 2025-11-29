@class NSString, NSNumber;

@interface LynxLazyBundleEntry : LynxPerformanceEntry

@property (retain, nonatomic) NSString *componentUrl;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSNumber *size;
@property (nonatomic) BOOL sync;
@property (nonatomic) BOOL loadSuccess;
@property (retain, nonatomic) NSNumber *requireStart;
@property (retain, nonatomic) NSNumber *requireEnd;
@property (retain, nonatomic) NSNumber *decodeStart;
@property (retain, nonatomic) NSNumber *decodeEnd;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
