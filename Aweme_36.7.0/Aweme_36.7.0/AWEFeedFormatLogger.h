@class NSString;

@interface AWEFeedFormatLogger : NSObject <AWEFeedFormatLoggerProtocol>

@property (nonatomic) BOOL enableFormatLogger;
@property (nonatomic) BOOL enableFormatLoggerInstance;
@property (nonatomic) BOOL enableDowngrade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logWithLevel:(long long)a0 subModuleName:(id)a1 linkIDs:(id)a2 eventType:(id)a3 where:(id)a4 what:(id)a5 who:(id)a6 extra:(id)a7;
+ (void)logWithLevel:(long long)a0 subModuleName:(id)a1 where:(id)a2 what:(id)a3 extra:(id)a4;
+ (id)sharedInstance;

- (void)logWithLevel:(long long)a0 subModuleName:(id)a1 linkIDs:(id)a2 eventType:(id)a3 where:(id)a4 what:(id)a5 who:(id)a6 extra:(id)a7;
- (void)logWithLevel:(long long)a0 subModuleName:(id)a1 where:(id)a2 what:(id)a3 extra:(id)a4;

@end
