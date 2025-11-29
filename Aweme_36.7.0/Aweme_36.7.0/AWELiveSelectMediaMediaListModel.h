@class NSString, NSNumber, AWELiveSelectMediaVideoInfoModel;

@interface AWELiveSelectMediaMediaListModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *absolutePath;
@property (copy, nonatomic) NSString *fileUri;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) AWELiveSelectMediaVideoInfoModel *videoInfo;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;

@end
