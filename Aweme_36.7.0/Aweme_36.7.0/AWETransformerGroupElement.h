@class NSString, AWETransformerLayoutGridAttributes, AWETransformerLayoutFlexAttributes, NSArray, AWETransformerLayoutCommonAttributes;

@interface AWETransformerGroupElement : AWETransformerBaseElement

@property (nonatomic) unsigned long long overflow;
@property (nonatomic) double scrollerVerticalSize;
@property (nonatomic) double scrollerHorizontalSize;
@property (nonatomic) unsigned long long flexDirection;
@property (nonatomic) unsigned long long justifyContent;
@property (nonatomic) unsigned long long alignItems;
@property (copy, nonatomic) NSString *gridTemplateColumns;
@property (copy, nonatomic) NSString *gridTemplateRows;
@property (copy, nonatomic) NSString *gridColumnGap;
@property (copy, nonatomic) NSString *gridRowGap;
@property (nonatomic) unsigned long long maxShowNum;
@property (nonatomic) double maxShowItemVisibleSpace;
@property (retain, nonatomic) AWETransformerLayoutFlexAttributes *flexLayoutAttribues;
@property (retain, nonatomic) AWETransformerLayoutGridAttributes *gridLayoutAttribues;
@property (retain, nonatomic) AWETransformerLayoutCommonAttributes *groupCommonLayoutAttributes;
@property (copy, nonatomic) NSArray *childElements;
@property (nonatomic) double timeFromParseToCreateElementTree;

+ (id)elementType;

- (id)subElements;
- (id)commonLayoutAttribue;
- (void)renderElement;
- (void)clearLayoutInfo;
- (BOOL)containerLynxElementWithCardType:(unsigned long long)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)layout;
- (void)loadView;

@end
