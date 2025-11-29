@interface MMActivityIndicator : UIImageView

@property (nonatomic) double duration;

- (void)startAnimating;
- (void)stopAnimating;

@end
