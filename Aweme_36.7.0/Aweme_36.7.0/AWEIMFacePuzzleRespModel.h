@class NSString, AWEIMFacePuzzleDataModel;

@interface AWEIMFacePuzzleRespModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *interface;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) AWEIMFacePuzzleDataModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
