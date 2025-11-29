@class NSString;

@interface CgiUnionTransferNoticeItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int isShowNotice;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *leftIcon;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *noticeId;

+ (void)initialize;

@end
