@class GCOpenReportParam, NSString, UIImageView, UIImage, GCChatRoomImageZoomAnimation;

@interface GameChatRoomConfig : NSObject

@property (retain, nonatomic) NSString *roomCoverImgUrl;
@property (retain, nonatomic) UIImage *roomBgImage;
@property (nonatomic) BOOL isImgDefaultImg;
@property (retain, nonatomic) UIImageView *animateCoverImgView;
@property (retain, nonatomic) UIImageView *fromImgView;
@property (retain, nonatomic) GCChatRoomImageZoomAnimation *zoomAnimation;
@property (retain, nonatomic) NSString *animationIdentifer;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *chatRoomDisplayName;
@property (nonatomic) long long targetChannelId;
@property (nonatomic) long long targetSeq;
@property (nonatomic) BOOL isRealTimeHotChat;
@property (nonatomic) BOOL autoJoinIfCan;
@property (retain, nonatomic) GCOpenReportParam *reportParam;
@property (nonatomic) BOOL backToGameLifeTab;
@property (nonatomic) BOOL popCurrentVc;
@property (nonatomic) struct CGSize { double width; double height; } desireViewSize;

- (id)init;
- (void).cxx_destruct;

@end
