@class NSAttributedString, EcsRichLabel;

@interface EcsRichLabelViewModel : NSObject

@property (readonly, nonatomic) EcsRichLabel *label;
@property (readonly, nonatomic) NSAttributedString *lightAttrStr;
@property (readonly, nonatomic) NSAttributedString *darkAttrStr;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

+ (id)createWithLabel:(id)a0;

- (id)initWithLabel:(id)a0;
- (void)setLabel:(id)a0;
- (id)getFontByName:(int)a0 size:(long long)a1 weight:(int)a2;
- (void).cxx_destruct;

@end
