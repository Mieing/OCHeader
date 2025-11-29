@class NSString;

@interface KidsWatchLoginReportObject : NSObject

@property (nonatomic) unsigned long long loginType;
@property (retain, nonatomic) NSString *qrCode;
@property (nonatomic) unsigned long long kidsCount;
@property (nonatomic) unsigned long long accountType;

- (void)reportAction:(unsigned long long)a0 withErrorCode:(int)a1;
- (void).cxx_destruct;

@end
