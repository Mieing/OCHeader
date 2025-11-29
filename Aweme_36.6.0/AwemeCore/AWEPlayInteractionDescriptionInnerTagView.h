@class UIImageView, UILabel, NSString;

@interface AWEPlayInteractionDescriptionInnerTagView : UIView <AWEPlayInteractionDescriptionInnerTagViewProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) double maxLabelWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
