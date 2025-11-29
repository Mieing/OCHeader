@class NSString;

@interface WCDeepCleanResource : NSObject <IDeepCleanClassProtocol>

@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) float progressLevel;
@property (nonatomic) float lastProgress;
@property (nonatomic) BOOL bCleanning;
@property (nonatomic) BOOL bStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)getShouldDeleteHeadImg;

- (id)init;
- (unsigned long long)getClassSize;
- (void)cleanData;
- (void)stop;
- (void)refreshState;

@end
