@class NSError, NSArray;

@interface YataJSONPatch : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *operations;
@property (readonly, nonatomic) NSArray *JSONArray;

- (id)initWithJSONArray:(id)a0;
- (id)applyToJSONObject:(id)a0 relativeTo:(id)a1 inplace:(BOOL)a2;
- (void).cxx_destruct;

@end
