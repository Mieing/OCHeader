@class NSString;

@interface BDXBridgePoiInjectCommentPostFileMusic : BDXBridgeModel

@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *musicName;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
