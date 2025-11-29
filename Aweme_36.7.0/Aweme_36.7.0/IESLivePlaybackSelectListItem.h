@class NSString, NSAttributedString, UIView;

@interface IESLivePlaybackSelectListItem : IESLiveDynamicModel

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSAttributedString *attributedContent;
@property (retain, nonatomic) NSAttributedString *selectedAttributedContent;
@property (retain, nonatomic) UIView *unselectedView;
@property (retain, nonatomic) UIView *selectedView;
@property (nonatomic) BOOL isCustomizeView;

- (void).cxx_destruct;
- (id)init;

@end
