@class NSArray, NSString;

@interface WCDeepCleanOtherUser : NSObject <IDeepCleanClassProtocol>

@property (retain, nonatomic) NSArray *otherUserPaths;
@property (retain, nonatomic) NSArray *otherUserMapids;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) float progressLevel;
@property (nonatomic) float lastProgress;
@property (nonatomic) BOOL bCleanning;
@property (nonatomic) BOOL bStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stop;
- (void)refreshState;
- (unsigned long long)getClassSize;
- (void)cleanData;
- (void).cxx_destruct;

@end
