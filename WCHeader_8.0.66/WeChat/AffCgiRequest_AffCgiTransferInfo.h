@class NSString;

@interface AffCgiRequest_AffCgiTransferInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL transfer;
@property (retain, nonatomic) NSString *requestClass;
@property (retain, nonatomic) NSString *responseClass;

+ (void)initialize;

- (void)setResponseClass:(id)a0;
- (id)responseClass;
- (void)setRequestClass:(id)a0;
- (id)requestClass;
- (void)setTransfer:(BOOL)a0;
- (BOOL)transfer;

@end
