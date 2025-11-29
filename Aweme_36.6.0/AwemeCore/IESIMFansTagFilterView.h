@class NSString, NSDictionary, UIStackView;

@interface IESIMFansTagFilterView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *selectedTag;
@property (copy, nonatomic) NSDictionary *tagsMap;

- (BOOL)updateSelectedTag:(id)a0;
- (id)initWithTags:(id)a0 defaultTag:(id)a1 clickBlock:(id /* block */)a2;
- (void)onTapButton:(id)a0;
- (id)findKeysForValue:(id)a0 inDictionary:(id)a1;
- (void).cxx_destruct;

@end
