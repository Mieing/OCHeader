@class NSString;

@interface HTSLiveRoomViewStats : IESLivePBBaseMessage

@property (nonatomic) BOOL isHidden;
@property (copy, nonatomic) NSString *displayShort;
@property (copy, nonatomic) NSString *displayMiddle;
@property (copy, nonatomic) NSString *displayLong;
@property (nonatomic) long long displayValue;
@property (nonatomic) long long displayVersion;
@property (nonatomic) BOOL incremental;
@property (nonatomic) int displayType;
@property (copy, nonatomic) NSString *displayShortAnchor;
@property (copy, nonatomic) NSString *displayMiddleAnchor;
@property (copy, nonatomic) NSString *displayLongAnchor;

+ (id)descriptor;

- (void)setDisplayVersion:(long long)a0;
- (void)setDisplayLongAnchor:(id)a0;
- (void)setDisplayMiddle:(id)a0;
- (void)setDisplayShortAnchor:(id)a0;
- (void)setDisplayLong:(id)a0;
- (void)setDisplayMiddleAnchor:(id)a0;
- (void)setDisplayShort:(id)a0;
- (void)setDisplayValue:(long long)a0;

@end
