@class NSString;

@interface AWEIMGroupJoinPanelItemConfirmButton : AWEIMGroupJoinPanelItemViewModel

@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL blockTap;

- (void).cxx_destruct;
- (id)init;

@end
