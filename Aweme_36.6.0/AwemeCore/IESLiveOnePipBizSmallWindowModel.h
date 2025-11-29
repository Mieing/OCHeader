@class NSNumber, UIViewController, NSDictionary;

@interface IESLiveOnePipBizSmallWindowModel : IESLiveOnePipBaseModel

@property (nonatomic) unsigned long long showOriginType;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSDictionary *preferOptions;
@property (copy, nonatomic) id /* block */ showCompletion;

- (void).cxx_destruct;

@end
