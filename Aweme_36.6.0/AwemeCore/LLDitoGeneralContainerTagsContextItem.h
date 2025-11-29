@class LLDitoGeneralContainerTagItem;

@interface LLDitoGeneralContainerTagsContextItem : NSObject

@property (readonly, nonatomic) LLDitoGeneralContainerTagItem *selectedTagItem;
@property (readonly, nonatomic) long long selectedTagItemIndex;

+ (id)itemWithSelectedTagItem:(id)a0 selectedIndex:(long long)a1;

- (id)initWithSelectedTagItem:(id)a0 selectedIndex:(long long)a1;
- (void).cxx_destruct;

@end
