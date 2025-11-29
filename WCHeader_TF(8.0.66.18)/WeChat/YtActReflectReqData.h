@class NSString, YtExtraOptions;

@interface YtActReflectReqData : NSObject

@property struct YTFullPack { struct YTDataPack { struct vector<YTRawImgData, std::allocator<YTRawImgData>> { struct YTRawImgData *__begin_; struct YTRawImgData *__end_; struct __compressed_pair<YTRawImgData *, std::allocator<YTRawImgData>> { struct YTRawImgData *__value_; } __end_cap_; } VideoData; long long BeginTime; long long ChangePointTime; struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } ChangePointTimeList; float OffsetSys; int config_begin; int frameNum; int LandMarkNum; int width; int height; char *log; char *SeqID; char *version; struct vector<RawYuvData, std::allocator<RawYuvData>> { struct RawYuvData *__begin_; struct RawYuvData *__end_; struct __compressed_pair<RawYuvData *, std::allocator<RawYuvData>> { struct RawYuvData *__value_; } __end_cap_; } yuvDatas; } AGin; struct YTCAPTCHA { int fixedInterval; int unit; int rand_shift; int rand_inv; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } intervals; char *SeqID; } CP; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } SingleImg_buffer; } fullDataPack;
@property (retain) NSString *rgbConfig;
@property struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } bestImg;
@property struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } bestShape;
@property struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } eyeImg;
@property struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } eyeShape;
@property struct Mat { int flags; int dims; int rows; int cols; char *data; int *refcount; char *datastart; char *dataend; char *datalimit; struct MatAllocator *allocator; struct MSize { int *p; } size; struct MStep { unsigned long long *p; unsigned long long buf[2]; } step; } mouthImg;
@property struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } mouthShape;
@property float lux;
@property (retain) NSString *appId;
@property (retain) NSString *video;
@property (retain) NSString *version;
@property (retain) NSString *sessionId;
@property int cpNum;
@property (retain) NSString *extraConfig;
@property (retain) YtExtraOptions *extraOptions;
@property (retain) NSString *controlConfig;
@property (retain) NSString *actionStr;
@property (retain, nonatomic) NSString *config;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
