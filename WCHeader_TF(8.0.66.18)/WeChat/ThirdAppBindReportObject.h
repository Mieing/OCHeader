@class NSString;

@interface ThirdAppBindReportObject : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long bindStatus;
@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isBound) BOOL bind;

- (id)init;
- (void)reportAction:(unsigned long long)a0;
- (void)reportAction:(unsigned long long)a0 withErrorCode:(long long)a1;
- (void).cxx_destruct;

@end
