@class NSString, NSMutableArray;

@interface StatusBrandKeyInfoDetail : WXPBGeneratedMessage

@property (nonatomic) unsigned long long uid;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *qrcodeId;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSMutableArray *signatureSource;
@property (retain, nonatomic) NSString *sourceId;

+ (void)initialize;

@end
