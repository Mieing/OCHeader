@class NSString, UITextField, UILabel, UIView;

@interface IESLiveInteractionKTVMusicFeedbackHeaderView : UIView

@property (retain, nonatomic) UILabel *songNameLabel;
@property (retain, nonatomic) UILabel *mustFillInSongLabel;
@property (retain, nonatomic) UITextField *songNameTextField;
@property (retain, nonatomic) UIView *songNameBottomLine;
@property (retain, nonatomic) UILabel *singerNameLabel;
@property (retain, nonatomic) UILabel *mustFillInSingerLabel;
@property (retain, nonatomic) UITextField *singerNameTextField;
@property (retain, nonatomic) UIView *singerNameBottomLine;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) NSString *songNameString;
@property (copy, nonatomic) NSString *singerNameString;

+ (id)p_buildMustFillInLabel;

- (id)p_buildTitleLabel;
- (id)initWithScaleRatio:(long long)a0;
- (id)p_buildTextFieldWithPlaceholder:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
