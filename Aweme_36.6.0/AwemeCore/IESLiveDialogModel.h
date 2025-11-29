@class NSString, NSArray, UIImage, UIView, NSNumber;

@interface IESLiveDialogModel : IESLiveDynamicModel

@property (nonatomic) long long dialogType;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailContent;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *imageContainerView;
@property (copy, nonatomic) UIImage *placeHolder;
@property (retain, nonatomic) NSArray *actionList;
@property (nonatomic) BOOL isVertical;
@property (nonatomic) BOOL canDismissByTouchOutside;
@property (nonatomic) BOOL hasCloseButton;
@property (copy, nonatomic) NSNumber *containerRadius;
@property (copy, nonatomic) id /* block */ closeBtnActionBlock;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
