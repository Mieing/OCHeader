@interface IESGurdChannelUsageMananger : NSObject

+ (BOOL)isChannelUsed:(id)a0 channel:(id)a1;
+ (void)accessDataWithType:(long long)a0 accessKey:(id)a1 channel:(id)a2 hitData:(BOOL)a3;
+ (BOOL)containsChannel:(id)a0 channel:(id)a1;
+ (void)accessDataWithModel:(id)a0;
+ (void)downloadByOdr:(id)a0 channel:(id)a1;
+ (void)downloadByVisit:(id)a0 channel:(id)a1 isBlocklist:(BOOL)a2 time:(long long)a3;
+ (void)downloadByPreChannels:(id)a0;
+ (void)addChannel:(id)a0 channel:(id)a1;
+ (void)removeChannel:(id)a0 channel:(id)a1;

@end
