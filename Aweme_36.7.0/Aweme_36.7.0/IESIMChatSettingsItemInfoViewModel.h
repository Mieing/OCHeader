@class NSString, UIView;

@interface IESIMChatSettingsItemInfoViewModel : IESIMChatSettingsItemBaseInfoViewModel

@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL disableArrow;
@property (retain, nonatomic) UIView *subtitlePreView;
@property (retain, nonatomic) UIView *subtitleNextView;
@property (nonatomic) double customSpacingAfterTitle;
@property (nonatomic) double customSpacingAfterSubtitlePreView;
@property (nonatomic) double customSpacingAfterSubtitle;
@property (nonatomic) double customSpacingAfterSubtitleNextView;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
