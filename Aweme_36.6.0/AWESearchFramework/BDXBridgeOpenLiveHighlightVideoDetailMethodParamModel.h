@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeOpenLiveHighlightVideoDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionid;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *episodeID;
@property (retain, nonatomic) NSArray *highlights;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
