@class UILabel, AWEEditAndPublishViewData, UIView;

@interface AWEEditAndPublishViewActionContainerModel : NSObject

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (weak, nonatomic) UIView *actionItemView;
@property (retain, nonatomic) AWEEditAndPublishViewData *data;

- (void).cxx_destruct;

@end
