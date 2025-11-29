@class NSString;

@interface AWEStudioStoryLastRecordModeManager : NSObject <AWEPublishTaskMessage>

@property (class, readonly, nonatomic) AWEStudioStoryLastRecordModeManager *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastRecordModeCacheKey;

@end
