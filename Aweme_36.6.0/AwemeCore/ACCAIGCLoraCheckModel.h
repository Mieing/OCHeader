@class NSDictionary, NSString, UIImage;

@interface ACCAIGCLoraCheckModel : NSObject <ACCAIGCCheckModelProtocol>

@property (retain, nonatomic) NSDictionary *infoMap;
@property (retain, nonatomic) NSDictionary *resultDict;
@property (nonatomic) unsigned long long infoFrom;
@property (readonly, copy, nonatomic) NSString *invalidText;
@property (readonly, nonatomic) UIImage *genderImage;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) long long face_count;
@property (readonly, nonatomic) long long pet_count;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) double yaw;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) float age;
@property (readonly, nonatomic) float faceAngle;
@property (readonly, nonatomic) long long trackId;
@property (readonly, nonatomic) NSDictionary *bbox;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfoModel:(id)a0;
- (id)getAlgorithmResultFromTypeDefine:(id)a0;
- (id)storeInfoMap;
- (id)getAlgorithmResultKeyList;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
