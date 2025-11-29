@class UIImage, NSAttributedString, AWEIMDouyinRedPacketInfoResponse;

@interface AWEIMLiveRedPacketProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *subTitle;
@property (copy, nonatomic) NSAttributedString *liveStatus;
@property (retain, nonatomic) UIImage *liveImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *bottomCoverImage;
@property (nonatomic) BOOL isLiving;
@property (retain, nonatomic) UIImage *openBtnImage;
@property (nonatomic) BOOL canReceive;
@property (retain, nonatomic) AWEIMDouyinRedPacketInfoResponse *info;
@property (nonatomic) BOOL isVideoRedPacket;

- (void).cxx_destruct;

@end
