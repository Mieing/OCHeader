@class UIColor;

@interface AFDTextBubbleContentConfig : NSObject

@property (nonatomic) double paddingH;
@property (nonatomic) double maxWidth;
@property (nonatomic) double minWidth;
@property (nonatomic) double minHeight;
@property (nonatomic) double verticalPadding;
@property (nonatomic) double bubbleHeight;
@property (nonatomic) unsigned long long maxOneLineCount;
@property (nonatomic) unsigned long long maxNumOfRows;
@property (nonatomic) long long fontClassReachedMax;
@property (nonatomic) long long fontClassNotReachedMax;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double lineSpaceReachedMax;
@property (nonatomic) double lineSpaceNotReachedMax;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;
- (id)init;

@end
