@class NSString, NSDictionary;

@interface BUPlayableTrackerContext : NSObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSDictionary *commonParams;

- (void).cxx_destruct;

@end
