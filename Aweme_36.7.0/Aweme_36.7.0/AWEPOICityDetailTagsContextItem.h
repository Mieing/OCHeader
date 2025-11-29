@class AWEPOICityDetailTagItem;

@interface AWEPOICityDetailTagsContextItem : NSObject

@property (readonly, nonatomic) AWEPOICityDetailTagItem *selectedTagItem;
@property (readonly, nonatomic) long long selectedTagItemIndex;

+ (id)itemWithSelectedTagItem:(id)a0 selectedIndex:(long long)a1;

- (id)initWithSelectedTagItem:(id)a0 selectedIndex:(long long)a1;
- (void).cxx_destruct;

@end
