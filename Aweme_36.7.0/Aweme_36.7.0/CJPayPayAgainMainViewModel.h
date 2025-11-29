@class NSString;

@interface CJPayPayAgainMainViewModel : NSObject

@property (copy, nonatomic) NSString *unfoldBtnText;
@property (nonatomic) BOOL isAssetStandard;
@property (nonatomic) BOOL showAmountInConfirmButton;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ didSelectedMethodBlock;
@property (copy, nonatomic) id /* block */ unfoldMethodListBlock;
@property (copy, nonatomic) id /* block */ gotoMethodListWhenCombine;
@property (copy, nonatomic) id /* block */ clickedSelectionItemBlock;

- (void).cxx_destruct;

@end
