@class NSString, NSDictionary, AWEBDPLynxMarkDownShadowNode;

@interface AWEBDPLynxMarkDownBundle : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long width;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL finished;
@property (copy, nonatomic) NSString *animationType;
@property (nonatomic) long long animationVelocity;
@property (nonatomic) long long renderLength;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastCharacterRect;
@property (nonatomic) struct CGSize { double width; double height; } cursorSize;
@property (copy, nonatomic) NSString *currentPlainText;
@property (copy, nonatomic) NSDictionary *markdownStyle;
@property (nonatomic) BOOL textSelection;
@property (retain, nonatomic) AWEBDPLynxMarkDownShadowNode *node;

- (long long)getAnimationEnumType;
- (void).cxx_destruct;
- (id)init;

@end
