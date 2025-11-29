@class NSLock, IESFeatureInfoRecorder;

@interface IESFeedFeatureInfoManager : NSObject

@property (retain, nonatomic) IESFeatureInfoRecorder *feedFeatureInfoRecorder;
@property (retain, nonatomic) NSLock *lock;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
