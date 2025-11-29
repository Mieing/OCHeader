@class NSString;

@interface WCAdChannelReportHeaderModel : NSObject

@property (retain, nonatomic) NSString *snsid;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *adExtInfo;
@property (retain, nonatomic) NSString *aid;
@property (nonatomic) int scene;

+ (id)genHeader:(id)a0 snsid:(id)a1 scene:(int)a2;
+ (id)genHeader:(id)a0 uxinfo:(id)a1 adExtInfo:(id)a2 aid:(id)a3 scene:(int)a4;
+ (id)initInner:(id)a0 snsid:(id)a1 scene:(int)a2;

- (void).cxx_destruct;

@end
