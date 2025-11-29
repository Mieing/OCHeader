@class NSString;

@interface WCPIPAudioOnlyIndicatorDescription : WCPIPTextStateDescription

@property (retain, nonatomic) NSString *leftIcon;
@property (retain, nonatomic) NSString *rightIcon;
@property (nonatomic) struct CGSize { double width; double height; } leftRightIconSize;
@property (nonatomic) double leftRightIconTextInset;

- (id)initWithText:(id)a0 leftIcon:(id)a1 rightIcon:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
