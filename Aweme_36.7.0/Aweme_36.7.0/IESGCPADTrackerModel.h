@class NSString, NSNumber, NSDictionary;

@interface IESGCPADTrackerModel : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (retain, nonatomic) NSNumber *adID;

- (void).cxx_destruct;

@end
