@class NSString, NSArray;

@interface IESGurdConfigSpecifiedClean : NSObject

@property (nonatomic) long long cleanType;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSArray *versions;

+ (id)cleanWithDictionary:(id)a0;

- (BOOL)shouldCleanWithVersion:(long long)a0;
- (void).cxx_destruct;
- (id)description;

@end
