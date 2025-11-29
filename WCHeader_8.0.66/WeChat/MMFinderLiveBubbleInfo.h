@class NSString, FinderLiveBubbleCreateLiveInfo, FinderLiveNoticeInfo;

@interface MMFinderLiveBubbleInfo : NSObject

@property (nonatomic) double createTime;
@property (nonatomic) long long bubbleType;
@property (nonatomic) unsigned int disappearTimeMsWithoutAction;
@property (nonatomic) unsigned int disappearTimeMsAfterClick;
@property (retain, nonatomic) NSString *bubbleWording;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned int realnamelikeSendReason;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) FinderLiveBubbleCreateLiveInfo *createliveInfo;

+ (id)generateBubbleInfo:(id)a0;

- (id)initWithBubbleInfo:(id)a0;
- (long long)getBubbleTypeFromBubbleInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
