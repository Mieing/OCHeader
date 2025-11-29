@interface AWEIMElfBotMemoryBriefComparator : NSObject

+ (void)compareTopicsWithDataModel:(id)a0 localBriefModel:(id)a1 syncDataModel:(id)a2 isSyncData:(BOOL)a3 result:(id)a4;
+ (void)compareArchivesWithDataModel:(id)a0 localBriefModel:(id)a1 syncDataModel:(id)a2 isSyncData:(BOOL)a3 result:(id)a4;
+ (void)compareCustomArchivesWithDataModel:(id)a0 localBriefModel:(id)a1 syncDataModel:(id)a2 isSyncData:(BOOL)a3 result:(id)a4;
+ (id)compareWithDataModel:(id)a0 localBriefModel:(id)a1 syncDataModel:(id)a2 isSyncData:(BOOL)a3;

@end
