@class NSString, WCAdChannelReportExtendInfoModel;

@interface WCAdChannelReportModel : NSObject

@property (retain, nonatomic) NSString *snsid;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *adExtInfo;
@property (retain, nonatomic) NSString *aid;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCAdChannelReportExtendInfoModel *extInfo;

- (id)initWithHeader:(id)a0;
- (void).cxx_destruct;

@end
