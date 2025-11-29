@class NSString;
@protocol AWEUserListGeneralCellConfigProtocol;

@interface AWEUserListGeneralCellRelationButton : DUXBaseButton <AWEUserListGeneralCellComponentProtocol>

@property (weak, nonatomic) id<AWEUserListGeneralCellConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maxWidthFittingTitles:(id)a0 font:(id)a1;
+ (double)suggestedWidthForTitles:(id)a0;

- (id)attributedStringForString:(id)a0 color:(id)a1;
- (void)initView;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
