@class NSError;

@interface BDSRPreprocessingInfo : NSObject <NSCopying>

@property (nonatomic) double srTargetWidth;
@property (nonatomic) double srTargetHeight;
@property (nonatomic) BOOL srCacheCanvas;
@property (nonatomic) unsigned int imageWidth;
@property (nonatomic) unsigned int imageHeight;
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) unsigned int srImageWidth;
@property (nonatomic) unsigned int srImageHeight;
@property (nonatomic) long long srDuration;
@property (retain, nonatomic) NSError *srError;
@property (nonatomic) BOOL decodedToYUV;
@property (nonatomic) BOOL srPreprocessed;
@property (nonatomic) BOOL srSuccessfulPreprocessed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
