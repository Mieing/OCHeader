@class NSString;

@interface AFDRadarFollowButtonModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *noRelation;
@property (copy, nonatomic) NSString *following;
@property (copy, nonatomic) NSString *followed;
@property (copy, nonatomic) NSString *eachOther;
@property (copy, nonatomic) NSString *followRequested;
@property (copy, nonatomic) NSString *followRequestAccept;
@property (copy, nonatomic) NSString *followRequestAcceptThenFollow;
@property (copy, nonatomic) NSString *eachOtherFollow;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
