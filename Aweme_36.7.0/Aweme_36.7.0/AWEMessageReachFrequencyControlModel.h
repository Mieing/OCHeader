@class NSString, NSArray;

@interface AWEMessageReachFrequencyControlModel : NSObject

@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL enable;
@property (nonatomic) double timeLimit;
@property (copy, nonatomic) NSArray *excludeScenes;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
