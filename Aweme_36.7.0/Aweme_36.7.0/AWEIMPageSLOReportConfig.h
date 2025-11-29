@class NSString;

@interface AWEIMPageSLOReportConfig : NSObject

@property (copy, nonatomic) NSString *cid;
@property (nonatomic) BOOL needReport;
@property (nonatomic) double reportRatio;
@property (nonatomic) double reportDelay;
@property (copy, nonatomic) NSString *pageUniqueId;

- (id)initWithPageUniqueId:(id)a0 reportRatio:(double)a1 reportDelay:(double)a2 needReport:(BOOL)a3 cid:(id)a4;
- (void).cxx_destruct;

@end
