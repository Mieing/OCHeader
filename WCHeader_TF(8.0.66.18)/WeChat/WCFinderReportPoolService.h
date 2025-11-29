@class NSString, WCFinderEditVideoReportInfo;

@interface WCFinderReportPoolService : MMUserService <MMServiceProtocol>

@property (copy, nonatomic) NSString *clickPostTimeStamp;
@property (retain, nonatomic) WCFinderEditVideoReportInfo *editReportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateClickPostTimeStamp;
- (id)getClickPostTimeStamp;
- (void)resetClickPostTimeStamp;
- (void)setEditVideoFileName:(id)a0;
- (id)editVideoFileName;
- (void)setEditVideoCompostTime:(double)a0;
- (id)editVideoCompostTimeStr;
- (BOOL)hasEditVideoReportInfo;
- (void)clearEditVideoReportInfo;
- (void).cxx_destruct;

@end
