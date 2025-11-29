@class NSNumber;

@interface LynxLoadBundleEntry : LynxPipelineEntry

@property (retain, nonatomic) NSNumber *loadBundleStart;
@property (retain, nonatomic) NSNumber *loadBundleEnd;
@property (retain, nonatomic) NSNumber *parseStart;
@property (retain, nonatomic) NSNumber *parseEnd;
@property (retain, nonatomic) NSNumber *loadBackgroundStart;
@property (retain, nonatomic) NSNumber *loadBackgroundEnd;
@property (retain, nonatomic) NSNumber *verifyTasmStart;
@property (retain, nonatomic) NSNumber *verifyTasmEnd;
@property (retain, nonatomic) NSNumber *ffiStart;
@property (retain, nonatomic) NSNumber *ffiEnd;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
