@interface TVLRenderingInfo : NSObject

@property (nonatomic) long long streamType;
@property (nonatomic) long long DTS;
@property (nonatomic) long long PTS;
@property (nonatomic) unsigned long long pictureType;

+ (id)renderingInfoWithFrameInfo:(id)a0 error:(id *)a1;

- (id)streamTypeDescription;
- (id)pictureTypeDescription;
- (id)description;
- (id)init;

@end
