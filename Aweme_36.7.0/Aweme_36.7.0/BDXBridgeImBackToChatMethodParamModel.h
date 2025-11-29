@class NSString, NSArray;

@interface BDXBridgeImBackToChatMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *mentionUid;
@property (copy, nonatomic) NSString *fillContent;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSArray *closeContainerIds;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
