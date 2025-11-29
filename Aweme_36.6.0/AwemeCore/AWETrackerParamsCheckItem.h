@class NSArray;

@interface AWETrackerParamsCheckItem : NSObject

@property (retain, nonatomic) NSArray *requiredFields;
@property (retain, nonatomic) NSArray *optionalFields;

- (BOOL)checkArray:(id)a0 ElementTypeIs:(Class)a1 error:(id *)a2;
- (id)initWithRequiredFields:(id)a0 withOptionalFields:(id)a1;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
