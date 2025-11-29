@interface IESIMB2CImpl.IESIMConversationBusinessCardViewLayoutModel : NSObject <IESIMConversationBusinessCardViewLayoutProtocol>

@property (nonatomic) BOOL hideBottomView;
@property (nonatomic) BOOL hideActionButton;
@property (nonatomic) double avatarTopOffset;
@property (nonatomic) double avatarLeftOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } avatarSize;
@property (nonatomic) double avatarRadius;
@property (nonatomic) double mainTitleTopOffset;
@property (nonatomic) double mainTitleLeftToAvatarRightOffset;
@property (nonatomic) double mainTitleRightToSelfRightOffset;
@property (nonatomic) double mainTitleFontSize;
@property (nonatomic) double subTitleTopToMainTitleBottomOffset;
@property (nonatomic) double subTitleLeftToMainTitleLeftOffset;
@property (nonatomic) double subTitleRightToSelfRightOffset;
@property (nonatomic) double subTitleFontSize;
@property (nonatomic) double lineTopToAvatarBottomOffset;
@property (nonatomic) double lineLeftToSelfLeftOffset;
@property (nonatomic) double lineRightToSelfRightOffset;
@property (nonatomic) double lineHeight;
@property (nonatomic) double iconTopTolineBottomOffset;
@property (nonatomic) double iconLeftToAvatarLeftOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic) double descTopTolineBottomOffset;
@property (nonatomic) double descBottomToSelfBottomOffset;
@property (nonatomic) double descLeftToIconRightOffset;
@property (nonatomic) double descRightToSelfRightOffset;
@property (nonatomic) double descTitleFontSize;

- (id)init;

@end
