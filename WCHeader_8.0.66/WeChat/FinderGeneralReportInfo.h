@class NSString;

@interface FinderGeneralReportInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *clientInfo;

+ (void)initialize;

- (void)setClientInfo:(id)a0;
- (id)clientInfo;
- (void)setInfo:(id)a0;
- (id)info;

@end
