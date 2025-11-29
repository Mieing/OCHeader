@class NSString, NSDate;

@interface KSCrashReportInfo : NSObject

@property (readonly, retain, nonatomic) NSString *reportID;
@property (readonly, retain, nonatomic) NSDate *creationDate;

+ (id)reportInfoWithID:(id)a0 creationDate:(id)a1;

- (id)initWithID:(id)a0 creationDate:(id)a1;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
