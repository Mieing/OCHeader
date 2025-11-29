@class NSString, NSMutableArray;

@interface MMListenSearchResultNonMusic : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *resultItems;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *listenReportInfo;
@property (retain, nonatomic) NSString *searchReportInfo;

+ (void)initialize;

@end
