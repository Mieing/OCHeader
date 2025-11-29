@class NSString, UIColor, AWEInnerPushLeftIconStaticDataModel;

@interface AWEInnerPushCommonViewTextActionAreaModel : AWEInnerPushCommonViewRightActionAreaModel

@property (copy, nonatomic) NSString *actionText;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) unsigned long long color;
@property (retain, nonatomic) AWEInnerPushLeftIconStaticDataModel *iconModel;
@property (nonatomic) unsigned long long order;
@property (copy, nonatomic) id /* block */ tapActionButtonBlock;
@property (nonatomic) unsigned long long emphasize;

- (void).cxx_destruct;
- (unsigned long long)type;

@end
