@class NSString, NSMutableArray;

@interface FinderAdPreMovieAdBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long aid;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *adReportExtraData;
@property (retain, nonatomic) NSString *finderReportBypData;
@property (retain, nonatomic) NSMutableArray *jumpInfoList;
@property (retain, nonatomic) NSMutableArray *dislikeReasonList;
@property (retain, nonatomic) NSString *traceId;

+ (void)initialize;

@end
