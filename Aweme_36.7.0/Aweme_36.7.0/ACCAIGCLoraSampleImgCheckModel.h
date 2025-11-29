@class NSDictionary, NSString;

@interface ACCAIGCLoraSampleImgCheckModel : NSObject <ACCAIGCCheckModelProtocol>

@property (retain, nonatomic) NSDictionary *infoMap;
@property (readonly, nonatomic) long long face_count;
@property (readonly, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfoModel:(id)a0;
- (id)getAlgorithmResultFromTypeDefine:(id)a0;
- (id)storeInfoMap;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
