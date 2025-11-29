@class NSArray, NSString;

@interface AWEAdOpenLiveRoomParamModel : BDXBridgeModel

@property (copy, nonatomic) NSArray *roomIDList;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *currentRoomID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
