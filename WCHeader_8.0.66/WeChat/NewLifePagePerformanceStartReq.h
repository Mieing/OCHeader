@class NSString, NewLifePagePerformanceStepDesc;

@interface NewLifePagePerformanceStartReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pageSessionId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *srcPage;
@property (retain, nonatomic) NewLifePagePerformanceStepDesc *desc;

+ (void)initialize;

@end
