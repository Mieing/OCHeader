@interface AWEHPBubbleImageLoadCompletionModel : NSObject

@property (nonatomic) long long loadStartTimestamp;
@property (nonatomic) long long loadSuccessTimestamp;
@property (nonatomic) long long imageLoadFrom;

- (id)initWithLoadStartTimestamp:(long long)a0 loadSuccessTimestamp:(long long)a1 imageLoadFrom:(long long)a2;
- (id)description;

@end
