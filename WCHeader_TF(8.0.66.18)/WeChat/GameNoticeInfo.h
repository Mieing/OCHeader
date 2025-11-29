@class NSString, GameNoticeAdditionalInfo;

@interface GameNoticeInfo : NSObject

@property (copy, nonatomic) NSString *noticeIconUrl;
@property (copy, nonatomic) NSString *noticeTitle;
@property (nonatomic) BOOL hasAdditionalInfo;
@property (retain, nonatomic) GameNoticeAdditionalInfo *additionalInfo;
@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic) BOOL hasCheckBtn;
@property (copy, nonatomic) NSString *checkTitle;
@property (nonatomic) BOOL checkState;

- (void).cxx_destruct;

@end
