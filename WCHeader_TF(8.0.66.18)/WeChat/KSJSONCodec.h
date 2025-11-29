@class NSMutableData, NSMutableArray, NSError;

@interface KSJSONCodec : NSObject

@property (nonatomic) struct KSJSONDecodeCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *callbacks;
@property (retain, nonatomic) NSMutableArray *containerStack;
@property (nonatomic) id currentContainer;
@property (retain, nonatomic) id topLevelContainer;
@property (retain, nonatomic) NSMutableData *serializedData;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL prettyPrint;
@property (nonatomic) BOOL sorted;
@property (nonatomic) BOOL ignoreNullsInArrays;
@property (nonatomic) BOOL ignoreNullsInObjects;

+ (id)codecWithEncodeOptions:(int)a0 decodeOptions:(int)a1;
+ (id)encode:(id)a0 options:(int)a1 error:(id *)a2;
+ (id)decode:(id)a0 options:(int)a1 error:(id *)a2;

- (id)initWithEncodeOptions:(int)a0 decodeOptions:(int)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
