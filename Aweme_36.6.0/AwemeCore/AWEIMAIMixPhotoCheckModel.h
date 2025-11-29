@class NSDictionary, NSArray;

@interface AWEIMAIMixPhotoCheckModel : NSObject

@property (retain, nonatomic) NSDictionary *infoMap;
@property (retain) NSArray *resultDictArray;

- (id)initWithInfoModel:(id)a0;
- (id)getAlgorithmResultFromTypeDefine:(id)a0;
- (BOOL)valid;
- (void).cxx_destruct;
- (float)occlusion;
- (long long)faceCount;

@end
