@class NSString, IESECURLModel, NSArray, IESECCombinationJumpModel;

@interface IESECCombinationModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *combinationID;
@property (retain, nonatomic) IESECURLModel *image;
@property (retain, nonatomic) NSArray *anchors;
@property (retain, nonatomic) IESECCombinationJumpModel *jump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
