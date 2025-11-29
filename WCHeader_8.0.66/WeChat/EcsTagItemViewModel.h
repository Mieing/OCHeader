@class EcsRichTextButtonViewModel, EcsTagItem;

@interface EcsTagItemViewModel : NSObject

@property (readonly, nonatomic) EcsTagItem *tagItem;
@property (readonly, nonatomic) EcsRichTextButtonViewModel *buttonVM;

+ (id)createWithTagItem:(id)a0;

- (id)initWithTagItem:(id)a0;
- (void)setTagItem:(id)a0;
- (void).cxx_destruct;

@end
