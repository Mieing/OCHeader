@class NSString;

@interface RTVXREngineInteractUserContext : NSObject

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) unsigned long long txQuality;
@property (nonatomic) unsigned long long rxQuality;

- (id)initWithUid:(id)a0 txQuality:(unsigned long long)a1 rxQuality:(unsigned long long)a2;
- (void).cxx_destruct;

@end
