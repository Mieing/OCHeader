@class NSString, AppMsgShareItem;

@interface BTRecommendAppMsg : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *digest;
@property (copy, nonatomic) NSString *contentUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *thumbUrl_1_1;
@property (copy, nonatomic) NSString *thumbUrl_235_1;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int flag;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) unsigned int videoWidth;
@property (nonatomic) unsigned int videoHeight;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned int styleFlag;
@property (nonatomic) unsigned int recRk;
@property (copy, nonatomic) NSString *recInfo;
@property (retain, nonatomic) AppMsgShareItem *shareItem;
@property (copy, nonatomic) NSString *finderFeedXml;

- (void).cxx_destruct;

@end
