@class NSString, UIFont;

@interface MMGrowTextViewWithExtrasConfig : NSObject

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double originHeight;
@property (nonatomic) long long warningThreshold;
@property (nonatomic) double textMaxShowLine;
@property (nonatomic) long long maxLength;
@property (nonatomic) BOOL doNotNeedClearButton;
@property (retain, nonatomic) NSString *placeHolder;
@property (nonatomic) long long canNotOutOfLengthBounds;
@property (nonatomic) BOOL enableSetContentOffsetOnlyByMyself;

- (void).cxx_destruct;

@end
