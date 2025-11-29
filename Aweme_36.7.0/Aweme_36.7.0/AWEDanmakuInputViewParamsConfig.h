@class NSDictionary;

@interface AWEDanmakuInputViewParamsConfig : NSObject

@property (copy, nonatomic) id /* block */ inputDidDismissBlock;
@property (copy, nonatomic) id /* block */ inputWillDismissBlock;
@property (copy, nonatomic) id /* block */ inputDidShowBlock;
@property (copy, nonatomic) id /* block */ inputWillShowBlock;
@property (copy, nonatomic) NSDictionary *logExtraDict;

- (void).cxx_destruct;

@end
