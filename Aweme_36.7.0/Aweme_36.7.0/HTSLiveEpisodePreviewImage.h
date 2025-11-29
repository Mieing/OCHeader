@class NSString, HTSLiveImage;

@interface HTSLiveEpisodePreviewImage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *previewUriUp;
@property (nonatomic) BOOL hasPreviewUriUp;
@property (retain, nonatomic) HTSLiveImage *previewUriDown;
@property (nonatomic) BOOL hasPreviewUriDown;
@property (nonatomic) int previewType;
@property (copy, nonatomic) NSString *previewWordUp;
@property (copy, nonatomic) NSString *previewWordDown;
@property (retain, nonatomic) HTSLiveImage *previewBackgroundUri;
@property (nonatomic) BOOL hasPreviewBackgroundUri;

+ (id)descriptor;

@end
