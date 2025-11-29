@class NSString;

@interface WCTimelineTrashReportData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *publishId;
@property (nonatomic) unsigned int likeCnt;
@property (nonatomic) unsigned int commentCnt;
@property (retain, nonatomic) NSString *postSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *exposeStartTime;
@property (nonatomic) unsigned int exposeCnt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_publishId;
+ (void)PBArrayAdd_likeCnt;
+ (void)PBArrayAdd_commentCnt;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_postSessionId;
+ (void)initialize;
+ (void)reportExpose:(id)a0 likeCnt:(unsigned int)a1 commentCnt:(unsigned int)a2 postSessionId:(id)a3 sessionId:(id)a4 exposeStartTime:(id)a5 exposeCnt:(unsigned int)a6;
+ (void)reportClick:(id)a0 likeCnt:(unsigned int)a1 commentCnt:(unsigned int)a2 postSessionId:(id)a3 sessionId:(id)a4 nextAction:(unsigned int)a5 nextPublishId:(id)a6;

@end
