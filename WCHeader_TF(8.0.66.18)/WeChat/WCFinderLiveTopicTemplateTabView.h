@class UILabel, NSString;
@protocol WCFinderTabViewDelegate;

@interface WCFinderLiveTopicTemplateTabView : UIView <WCFinderTabViewProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSString *text;
@property (weak, nonatomic) id<WCFinderTabViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTitleText:(id)a0;
- (void)updateForState:(unsigned long long)a0;
- (void)setBindRedDotPath:(id)a0;
- (void).cxx_destruct;

@end
