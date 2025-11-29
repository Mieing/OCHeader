@class NSString, NSData;

@interface MMListenRedDotEventData : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) NSString *lastReportEventId;
@property (nonatomic) unsigned int ctrlinfoBusinessType;
@property (retain, nonatomic) NSString *bizId;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) NSString *tipsid;
@property (retain, nonatomic) NSString *tipsUuid;
@property (retain, nonatomic) NSString *showTxt;
@property (nonatomic) unsigned int messageNum;
@property (retain, nonatomic) NSString *lastBizId;
@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *showPath;
@property (nonatomic) unsigned int ctrlType;
@property (retain, nonatomic) NSData *extReportinfo;

+ (void)initialize;

@end
