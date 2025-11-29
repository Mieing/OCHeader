@class NSString, NSArray;

@interface BXFeatureConcernEventOC : NSObject

@property (copy, nonatomic) NSString *sessionName;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSArray *params;

- (void).cxx_destruct;

@end
