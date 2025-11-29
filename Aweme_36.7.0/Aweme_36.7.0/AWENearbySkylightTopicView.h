@class UILabel, NSString, UIView;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkylightTopicView : UIView <AWENearbySkyLightElementViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
