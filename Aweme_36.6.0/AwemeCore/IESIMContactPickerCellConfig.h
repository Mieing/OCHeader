@class NSString;

@interface IESIMContactPickerCellConfig : NSObject

@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ didClickButtonBlock;
@property (copy, nonatomic) id /* block */ injectParamBlock;
@property (copy, nonatomic) id /* block */ createCellModelBlock;
@property (copy, nonatomic) id /* block */ cellWillDisaplayHandler;
@property (nonatomic) BOOL shouldCellWillDisaplayDeduplicated;
@property (nonatomic) long long rightIconStyle;
@property (copy, nonatomic) NSString *rightButtonText;
@property (copy, nonatomic) id /* block */ registerCellBlock;

- (void).cxx_destruct;

@end
