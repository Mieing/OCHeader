@protocol IESECShopPopupProtocol;

@interface IESECShopPopupTask : NSObject

@property (nonatomic) unsigned long long triggerTime;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL showContinue;
@property (weak, nonatomic) id<IESECShopPopupProtocol> popup;

- (void).cxx_destruct;

@end
