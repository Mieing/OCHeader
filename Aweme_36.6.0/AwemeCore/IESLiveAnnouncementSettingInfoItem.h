@class NSString, UIColor, UIImage;

@interface IESLiveAnnouncementSettingInfoItem : IESLiveAnnouncementSettingBaseItem

@property (copy, nonatomic) NSString *rightTitle;
@property (retain, nonatomic) UIColor *rightTitleColor;
@property (retain, nonatomic) UIImage *rightIcon;

- (void).cxx_destruct;
- (Class)cellClass;

@end
