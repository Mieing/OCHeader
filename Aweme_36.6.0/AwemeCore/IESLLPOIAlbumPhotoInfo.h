@class NSString, NSNumber;

@interface IESLLPOIAlbumPhotoInfo : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *uploaderNickName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *picID;
@property (copy, nonatomic) NSString *optimizedUrl;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSNumber *picQualityConfidence;
@property (copy, nonatomic) NSString *uploaderId;
@property (copy, nonatomic) NSString *picSource;
@property (copy, nonatomic) NSString *nameForShow;
@property (copy, nonatomic) NSString *logParams;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *videoCoverUri;
@property (copy, nonatomic) NSString *videoCoverUrl;
@property (nonatomic) double vidioDuration;
@property (nonatomic) double vidioWidth;
@property (nonatomic) double vidioHeight;
@property (nonatomic) long long picOrder;
@property (nonatomic) long long tabIndex;
@property (nonatomic) BOOL hasTrackShowEvent;
@property (copy, nonatomic) NSString *parentTabName;
@property (copy, nonatomic) NSString *parentTabID;
@property (nonatomic) BOOL photoIsSelected;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
