@class AWEIMFacePuzzlePicModel, NSString, NSArray, NSDictionary, AWEIMFacePuzzleContext;

@interface AWEIMFacePuzzleDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *status;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *mergedPicPath;
@property (copy, nonatomic) NSArray *trueOptionList;
@property (copy, nonatomic) NSArray *confusingOptionList;
@property (copy, nonatomic) NSArray *distractorOptionList;
@property (copy, nonatomic) NSArray *extraOptionList;
@property (copy, nonatomic) NSArray *errorOptionList;
@property (copy, nonatomic) NSString *optionCollectionImagePath;
@property (copy, nonatomic) NSString *faceAlignImagePath;
@property (retain, nonatomic) NSDictionary *features;
@property (copy, nonatomic) NSString *originPicPath;
@property (copy, nonatomic) AWEIMFacePuzzlePicModel *originPicModel;
@property (retain, nonatomic) NSDictionary *reqExtraParams;
@property (retain, nonatomic) AWEIMFacePuzzleContext *routerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featuresJSONTransformer;
+ (id)errorOptionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
