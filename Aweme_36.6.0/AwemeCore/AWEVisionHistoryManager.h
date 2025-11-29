@class NSString;

@interface AWEVisionHistoryManager : NSObject <AWEVisionHistoryManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanVisionHistoryImage;
+ (BOOL)getVisionHistoryCleanEnable;
+ (id)getHistorySorted;
+ (long long)getVisionHistoryCleanMaxCount;
+ (long long)getVisionHistoryCleanMaxDay;
+ (void)deleteHistoryWithIds:(id)a0;


@end
