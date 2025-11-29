@class NSString, NSAttributedString;

@interface BDSCResearchCardSolutionTip : NSObject

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ feedbackBlock;
@property (nonatomic) BOOL isLast;
@property (nonatomic) BOOL isFeedback;

- (void).cxx_destruct;

@end
