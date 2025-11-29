@class NSString;

@interface BDByteCastPlayerMediaAssetItem : BDByteCastPlayerBaseMediaAssetItem

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) long long bitrate;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;

@end
