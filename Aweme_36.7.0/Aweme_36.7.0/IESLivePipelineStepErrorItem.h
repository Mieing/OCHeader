@class NSString, NSError;

@interface IESLivePipelineStepErrorItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long sourceType;

- (id)initWithName:(id)a0 error:(id)a1 sourceType:(long long)a2;
- (void).cxx_destruct;

@end
