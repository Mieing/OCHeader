@class NSString, NSDictionary;

@interface FinderRedDotUnExpReportStruct : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned long long exposeTimeMs;
@property (retain, nonatomic) NSDictionary *reportDict;
@property (nonatomic) unsigned long long businessType;

- (void).cxx_destruct;

@end
