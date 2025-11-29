@class NSString, NSArray;

@interface BDPExtLogModel : NSObject

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long timestamp;
@property (copy, nonatomic) NSString *method;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSArray *filterMsg;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
