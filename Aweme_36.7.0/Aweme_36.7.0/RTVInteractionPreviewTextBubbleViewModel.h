@class NSString, NSAttributedString, NSDate;

@interface RTVInteractionPreviewTextBubbleViewModel : NSObject

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSDate *timeStamp;
@property (nonatomic) unsigned long long direction;

- (void).cxx_destruct;

@end
