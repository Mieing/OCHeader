@class NSArray;

@interface MMProfileMomentsCellView : UIView

@property (copy, nonatomic) NSArray *displayedMediaItems;
@property (copy, nonatomic) NSArray *displayedImageViews;

- (void)updateWithDataItems:(id)a0;
- (void)removeDisplayedImageViews;
- (void).cxx_destruct;

@end
