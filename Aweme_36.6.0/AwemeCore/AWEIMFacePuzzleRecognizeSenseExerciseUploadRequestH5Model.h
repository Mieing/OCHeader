@class AWEIMFacePuzzlePicUpLoadH5Model;

@interface AWEIMFacePuzzleRecognizeSenseExerciseUploadRequestH5Model : AWEBaseApiModel

@property (retain, nonatomic) AWEIMFacePuzzlePicUpLoadH5Model *mainPicUpload;
@property (retain, nonatomic) AWEIMFacePuzzlePicUpLoadH5Model *sensePicUpLoad;

+ (id)mainPicUploadJSONTransformer;
+ (id)sensePicUpLoadJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
