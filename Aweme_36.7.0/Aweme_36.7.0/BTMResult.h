@class NSError;

@interface BTMResult : NSObject

@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;

+ (id)succeedWithValue:(id)a0;
+ (id)failWithError:(id)a0;

- (id)initPrivate;
- (void).cxx_destruct;

@end
