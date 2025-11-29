@class NSString, NSMutableArray;

@interface FinderStreamTxtCard : WXPBGeneratedMessage

@property (nonatomic) unsigned long long layoutId;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *titleWording;
@property (retain, nonatomic) NSMutableArray *linkWording;
@property (retain, nonatomic) NSMutableArray *linkActionInfo;
@property (retain, nonatomic) NSMutableArray *linkReportId;

+ (void)initialize;

@end
