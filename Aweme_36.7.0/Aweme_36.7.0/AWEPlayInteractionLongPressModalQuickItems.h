@class NSString;

@interface AWEPlayInteractionLongPressModalQuickItems : NSObject

@property (nonatomic) long long iconType;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *iconTitleText;
@property (copy, nonatomic) NSString *didReachText;
@property (copy, nonatomic) id /* block */ willAppearBlock;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;

@end
