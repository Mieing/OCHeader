@class NSString;

@interface CdnError : WXPBGeneratedMessage

@property (nonatomic) int errtype;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;
@property (nonatomic) int detailErrtype;
@property (nonatomic) int detailErrcode;
@property (retain, nonatomic) NSString *detailErrmsg;

+ (void)initialize;

@end
