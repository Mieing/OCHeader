@class NSString, NSSet;

@interface IESLiveGiftPanelTipItem : IESLiveDynamicModel

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *dependencies;
@property (copy, nonatomic) id /* block */ showTipIfNeeded;

- (void).cxx_destruct;

@end
