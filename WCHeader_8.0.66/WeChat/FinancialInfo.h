@class NSString, FinancialInfo_VideoFeed, NSMutableArray, FinancialInfo_StaticVideo;

@interface FinancialInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *exitWording;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int contentType;
@property (retain, nonatomic) FinancialInfo_StaticVideo *staticVideo;
@property (retain, nonatomic) FinancialInfo_VideoFeed *videoFeed;
@property (retain, nonatomic) NSString *bottomWording;

+ (void)initialize;

@end
