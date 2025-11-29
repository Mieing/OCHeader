@class NSString;

@interface AWEProfileBaseHeaderSegmentItemConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) NSString *redDotAccessibilityText;
@property (nonatomic) BOOL showBackground;
@property (nonatomic) BOOL isNewFullScreenStyle;

- (void).cxx_destruct;

@end
