@class NSString, UIImageView, UILabel, UIView;

@interface AWEIMMessageTabNaviBarSearchEntryView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *searchEntryContentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *searchPlaceHolder;
@property (copy, nonatomic) id /* block */ onSearchEntryViewClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
