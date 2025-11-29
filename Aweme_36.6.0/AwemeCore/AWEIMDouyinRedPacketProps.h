@class UIColor, NSArray, NSString, UIImage, NSAttributedString;
@protocol AWEIMDouyinRedPacketMessageProtocol;

@interface AWEIMDouyinRedPacketProps : AWEIMUIViewPresenterProps <AWEIMDouyinRedPacketPropsProtocol>

@property (copy, nonatomic) NSAttributedString *titleTopSupplementText;
@property (copy, nonatomic) NSArray *avatarArray;
@property (nonatomic) BOOL needShowSenderAvatar;
@property (copy, nonatomic) NSArray *senderAvatar;
@property (copy, nonatomic) NSAttributedString *middleText;
@property (nonatomic) BOOL needNewCoverView;
@property (copy, nonatomic) id /* block */ tapActionBlock;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *subTitle;
@property (copy, nonatomic) NSAttributedString *coverSubTitle;
@property (nonatomic) BOOL isCommandRedPacket;
@property (nonatomic) BOOL isAudioRedPacket;
@property (nonatomic) BOOL isCameraRedPacket;
@property (retain, nonatomic) id<AWEIMDouyinRedPacketMessageProtocol> message;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *backgroundCoverImage;
@property (nonatomic) BOOL isSimpleStyle;
@property (copy, nonatomic) NSString *promotionTitle;
@property (retain, nonatomic) UIImage *promotionLeftIcon;
@property (retain, nonatomic) UIColor *promotionCardBgColor;
@property (copy, nonatomic) NSString *promotionStatusText;
@property (copy, nonatomic) NSString *promotionStyle;
@property (nonatomic) BOOL isPromotionEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
