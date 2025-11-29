@class HTSLiveImage;

@interface HTSLiveTextPieceImage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) float scalingRate;

+ (id)descriptor;

@end
