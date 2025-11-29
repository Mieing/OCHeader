@class NSString;

@interface WCAdDelReportInfo : NSObject

@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) long long type;
@property (nonatomic) long long errorCode;

- (id)toReportString;
- (void).cxx_destruct;

@end
