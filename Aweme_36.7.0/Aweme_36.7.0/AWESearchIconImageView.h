@class NSString;
@protocol AWESearchIconImageViewProtocol;

@interface AWESearchIconImageView : AWEEcomSearchWebImageView

@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *mainPictureLabel;
@property (weak, nonatomic) id<AWESearchIconImageViewProtocol> searchIconImageViewDelegate;

- (void)tagImageTapped:(id)a0;
- (void)bindJumpEventWithSchema:(id)a0;
- (void).cxx_destruct;

@end
