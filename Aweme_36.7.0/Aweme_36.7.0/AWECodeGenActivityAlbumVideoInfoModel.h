@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenActivityAlbumVideoInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) AWECodeGenUrlModel *coverImageModel;
@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *format;
@property (nonatomic) long long size;
@property (nonatomic) long long bitrate;
@property (copy, nonatomic) NSString *definition;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
