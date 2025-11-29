@class NSString, NSDictionary, NSNumber;

@interface BDMannorAdTrackConetext : NSObject

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) BOOL useV3;
@property (copy, nonatomic) NSString *trackLabel;
@property (retain, nonatomic) NSNumber *adID;
@property (copy, nonatomic) NSString *refer;

- (void)useV3Tracker:(BOOL)a0;
- (void).cxx_destruct;

@end
