@class UIImage, NSString;

@interface IESLiveChatChannelIndicatorItemModel : NSObject

@property (retain, nonatomic) UIImage *avatar;
@property (nonatomic) BOOL avatarNeedRadius;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long memberCount;
@property (nonatomic) long long channelId;
@property (nonatomic) BOOL redDot;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) BOOL showMemberCount;
@property (nonatomic) BOOL needScroll;

- (void).cxx_destruct;

@end
