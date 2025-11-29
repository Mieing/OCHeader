@class NSArray, NSNumber, BDXRLRemoteInfo;

@interface BDXRLRemoteConfig : NSObject

@property (retain, nonatomic) BDXRLRemoteInfo *remoteInfo;
@property (copy, nonatomic) NSArray *processorsSequence;
@property (copy, nonatomic) NSArray *shuffleDomains;
@property (retain, nonatomic) NSNumber *dynamic;
@property (retain, nonatomic) NSNumber *disableCdnCache;
@property (retain, nonatomic) NSNumber *retryTimes;

- (void).cxx_destruct;
- (id)description;

@end
