@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeMannorEnterLiveMethodParamsModel : BDXBridgeModel

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSNumber *orientation;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *isPreview;
@property (copy, nonatomic) NSString *rawLive;
@property (copy, nonatomic) NSString *popType;
@property (retain, nonatomic) NSDictionary *ecomLiveParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
