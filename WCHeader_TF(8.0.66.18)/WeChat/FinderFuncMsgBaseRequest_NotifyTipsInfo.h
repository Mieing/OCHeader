@class NSString;

@interface FinderFuncMsgBaseRequest_NotifyTipsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *tipsId;
@property (nonatomic) unsigned long long deliveryTime;
@property (nonatomic) unsigned int ctrlinfoType;
@property (nonatomic) unsigned int exposed;
@property (nonatomic) unsigned int liveStatus;
@property (retain, nonatomic) NSString *byPassInfo;

+ (void)initialize;

@end
