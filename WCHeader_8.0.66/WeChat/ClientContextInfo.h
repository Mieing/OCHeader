@class NSString;

@interface ClientContextInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *contextId;
@property (retain, nonatomic) NSString *clickTabContextId;
@property (retain, nonatomic) NSString *clientReportBuff;

+ (void)initialize;

- (void)setClientReportBuff:(id)a0;
- (id)clientReportBuff;
- (void)setClickTabContextId:(id)a0;
- (id)clickTabContextId;
- (void)setContextId:(id)a0;
- (id)contextId;

@end
