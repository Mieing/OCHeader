@class NSString;

@interface AWESECEventFlowLogStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sfwID;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *fileDir;
@property (readonly, copy, nonatomic) NSString *proto;
@property BOOL reported;
@property unsigned long long numberOfReportedPacks;
@property unsigned long long numberOfReportedLogs;

+ (id)eventFlowLogDir;
+ (void)storeCurrentStatus;
+ (id)currentStatus;
+ (id)lastStatus;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
