@class AWEECOMIMBaseCardModel;

@interface AWEECOMIMCardButtonActionModel : AWEECOMIMButtonAction

@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (weak, nonatomic) AWEECOMIMBaseCardModel *cardModel;
@property (retain, nonatomic) id handler;

- (id)goodCardSkipUrlString;
- (void).cxx_destruct;

@end
