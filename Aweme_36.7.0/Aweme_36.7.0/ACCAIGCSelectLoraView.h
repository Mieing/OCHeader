@class ACCAnimatedButton, NSDictionary;

@interface ACCAIGCSelectLoraView : UIView

@property (retain, nonatomic) ACCAnimatedButton *loraInfoButton;
@property (retain, nonatomic) ACCAnimatedButton *switchLoraInfoButton;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) NSDictionary *trackInfo;

- (void)onClickSelectAIGCInfo;
- (void)addAIGCSelectLoraSwitchTarget:(id)a0 sel:(SEL)a1;
- (void)updateSelectAIGCLoraInfo;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
