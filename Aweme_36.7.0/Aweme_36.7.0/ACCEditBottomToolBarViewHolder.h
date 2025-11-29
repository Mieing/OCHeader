@class UIStackView, NSArray, ACCGradientView, NSString, UIView, ACCEditNoteStyleToolBarViewState, UIScrollView;

@interface ACCEditBottomToolBarViewHolder : NSObject <ACCEditUIViewHolderProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) ACCEditNoteStyleToolBarViewState *viewState;
@property (copy, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (weak, nonatomic) id component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)componentClass;

@end
