@class NSString, NSNumber;

@interface AWEAdFollowUserParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) NSNumber *from;
@property (retain, nonatomic) NSNumber *fromPreviouspage;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) NSNumber *fromPageType;
@property (retain, nonatomic) NSNumber *prePageType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
