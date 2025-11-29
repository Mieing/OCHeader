@class NSString, NSDictionary;

@interface IESLLVIRUnitModel : NSObject

@property (copy, nonatomic) NSString *unitKey;
@property (nonatomic) long long schedule;
@property (nonatomic) long long delay;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelWithData:(id)a0;

- (void).cxx_destruct;

@end
