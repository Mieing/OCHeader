@class NSString, NSNumber;

@interface AWEIMXBridgeOpenIMFeedTogetherLiveMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSNumber *awemeType;
@property (copy, nonatomic) NSString *authorUid;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
