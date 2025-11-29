@class NSString;

@interface IESLiveAccessibilityInsertConfig : NSObject

@property (retain, nonatomic) id itemElement;
@property (nonatomic) long long embeddedType;
@property (nonatomic) long long postionType;
@property (nonatomic) struct CGSize { double width; double height; } customViewSize;
@property (nonatomic) struct CGPoint { double x; double y; } absolutelyPointOrigin;
@property (retain, nonatomic) NSString *relativeViewIdentify;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } relativelyOffset;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ attributeBuilder;

- (void).cxx_destruct;
- (id)init;

@end
