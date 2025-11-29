@class NSString, AWEIMFacePuzzlePicModel, NSDictionary;

@interface AWEIMFacePuzzleRecognizeSenseExerciseInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *secExerciseId;
@property (copy, nonatomic) NSString *secExerciseUserId;
@property (retain, nonatomic) AWEIMFacePuzzlePicModel *mainPic;
@property (retain, nonatomic) AWEIMFacePuzzlePicModel *sensePic;
@property (retain, nonatomic) NSDictionary *senseMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
