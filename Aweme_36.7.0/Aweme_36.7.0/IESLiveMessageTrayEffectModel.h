@class HTSLiveTrayEffectMessage, NSAttributedString, NSArray;
@protocol IESLiveEffectTrayComboDelegate;

@interface IESLiveMessageTrayEffectModel : NSObject

@property (weak, nonatomic) id<IESLiveEffectTrayComboDelegate> delegate;
@property (retain, nonatomic) NSAttributedString *content;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) HTSLiveTrayEffectMessage *message;
@property (retain, nonatomic) NSArray *comboInfo;

- (void).cxx_destruct;

@end
