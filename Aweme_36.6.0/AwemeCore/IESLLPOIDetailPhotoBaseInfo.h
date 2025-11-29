@class NSString, NSDictionary, UIImage, NSValue, NSNumber, IESLLifeURLModel;

@interface IESLLPOIDetailPhotoBaseInfo : NSObject

@property (retain, nonatomic) IESLLifeURLModel *thumbnailURL;
@property (retain, nonatomic) IESLLifeURLModel *imageURL;
@property (retain, nonatomic) NSNumber *picScore;
@property (retain, nonatomic) NSString *picSource;
@property (nonatomic) long long picIndex;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) UIImage *watermarkImage;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSValue *contentOffset;
@property (copy, nonatomic) NSNumber *zoomScale;
@property (nonatomic) long long source;
@property (nonatomic) BOOL hasTrackShowEvent;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;
@property (copy, nonatomic) id /* block */ onDisplaySizeReadyBlock;
@property (copy, nonatomic) NSDictionary *trackData;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *videoCoverUri;
@property (copy, nonatomic) NSString *videoCoverUrl;
@property (nonatomic) double vidioDuration;
@property (nonatomic) double vidioWidth;
@property (nonatomic) double vidioHeight;
@property (nonatomic) BOOL playWhenCellAppear;

- (void).cxx_destruct;
- (id)init;

@end
