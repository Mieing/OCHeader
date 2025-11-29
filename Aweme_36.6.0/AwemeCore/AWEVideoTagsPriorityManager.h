@class UIStackView, NSArray, UIView, AWEPlayInteractionBaseElement, NSMutableArray;

@interface AWEVideoTagsPriorityManager : NSObject

@property (weak, nonatomic) AWEPlayInteractionBaseElement *sourceElement;
@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) NSMutableArray *components;
@property (copy, nonatomic) NSArray *activedComponents;
@property (retain, nonatomic) UIView *placeHolderView;

+ (BOOL)needShowWithContext:(id)a0;
+ (id)componentsPriorities;
+ (id)changeChapterTagPriority:(id)a0;

- (void)updateWithData:(id)a0 context:(id)a1;
- (BOOL)isTagCoCreatorTag:(id)a0;
- (BOOL)isTagChapter:(id)a0;
- (id)initWithSourceElement:(id)a0;
- (void)updateActivedComponentsWithData:(id)a0 context:(id)a1;
- (BOOL)canShowPlaceHolderWithModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
