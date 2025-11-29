@class UIFont, NSArray, NSString, NSMutableSet;

@interface AWEIMGreetingContentProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSArray *stickers;
@property (nonatomic) BOOL prevMessageIsRecentNewsShow;
@property (nonatomic) BOOL hideCloseButton;
@property (copy, nonatomic) id /* block */ closeButtonClickAction;
@property (copy, nonatomic) id /* block */ sendSelectEmojiWithGreetingEmoticonBlock;
@property (copy, nonatomic) id /* block */ willDisplayEmojiWithGreetingEmoticonBlock;
@property (nonatomic) BOOL hideSeperatorLineView;
@property (nonatomic) BOOL needCalculateShowedIndex;
@property (nonatomic) double separatorLineViewTopOffsetOfParentView;
@property (nonatomic) struct CGSize { double width; double height; } closeButtonSize;
@property (nonatomic) double closeButtonTrailingOffsetOfParentView;
@property (nonatomic) struct CGSize { double width; double height; } collectionViewItemSize;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double collectionViewTopOffsetOfGreetingLabel;
@property (retain, nonatomic) NSString *greetingLabelText;
@property (retain, nonatomic) UIFont *greetingLabelTextSize;
@property (nonatomic) long long greetingLabelTextNumberOfLines;
@property (nonatomic) double greetingLabelHeight;
@property (nonatomic) double greetingLabelTopOffsetOfParentView;
@property (nonatomic) double greetingLabelLeadingOffsetOfParentView;
@property (nonatomic) double greetingLabelTrailingOffsetOfParentView;
@property (retain, nonatomic) NSMutableSet *displayedSet;

- (void).cxx_destruct;

@end
