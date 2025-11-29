@class SendPatWrap, PatWrap, NSString;

@interface RevokePatReportObject : NSObject

@property (retain, nonatomic) SendPatWrap *sendPatWrap;
@property (retain, nonatomic) PatWrap *patWrap;
@property (retain, nonatomic) NSString *chatUserName;
@property (nonatomic) unsigned long long revokeType;
@property (nonatomic) unsigned long long revokeTime;

- (void)reportFromResult:(BOOL)a0 andAction:(unsigned long long)a1;
- (void)reportFromSendPat:(id)a0 result:(BOOL)a1 action:(unsigned long long)a2;
- (void)reportFromPat:(id)a0 chat:(id)a1 result:(BOOL)a2 action:(unsigned long long)a3;
- (void).cxx_destruct;

@end
