@class NSString, FinderLiveBubbleCreateLiveInfo, FinderLiveNoticeInfo;

@interface FinderLiveBubbleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int bubbleType;
@property (nonatomic) unsigned int disappearTimeMsWithoutAction;
@property (nonatomic) unsigned int disappearTimeMsAfterClick;
@property (retain, nonatomic) NSString *bubbleWording;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int realnamelikeSendReason;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveBubbleCreateLiveInfo *createliveInfo;

+ (void)initialize;

@end
