@class NSString, NSArray;

@interface AWEFeedTabJumpGuideViewConfig : NSObject

@property (copy, nonatomic) NSString *hintLabel;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSArray *imageURLList;
@property (nonatomic) unsigned long long iconPosition;
@property (copy, nonatomic) id /* block */ btnClickBlock;

- (void).cxx_destruct;

@end
