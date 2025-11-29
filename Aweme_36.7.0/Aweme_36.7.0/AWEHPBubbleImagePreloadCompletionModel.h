@class UIImage;

@interface AWEHPBubbleImagePreloadCompletionModel : NSObject

@property (nonatomic) long long preloadStartTimestamp;
@property (nonatomic) long long preloadSuccessTimestamp;
@property (nonatomic) long long imagePreloadFrom;
@property (retain, nonatomic) UIImage *preloadImage;

- (void).cxx_destruct;
- (id)description;

@end
