@class NSArray, NSAttributedString;

@interface IESLiveDanmakuNotifyEffectViewModel : NSObject

@property (copy, nonatomic) NSArray *backgroundImageURLS;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (copy, nonatomic) NSArray *flexSetting;
@property (nonatomic) double danmakuHeight;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) id message;

- (void).cxx_destruct;

@end
