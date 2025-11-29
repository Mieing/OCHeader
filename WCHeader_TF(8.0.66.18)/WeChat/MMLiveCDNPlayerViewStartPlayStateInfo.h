@class MMFinderLiveStreamTypeInfo;

@interface MMLiveCDNPlayerViewStartPlayStateInfo : NSObject

@property (retain, nonatomic) MMFinderLiveStreamTypeInfo *finderLiveStreamTypeInfo;
@property (nonatomic) BOOL hasReceivedCurrentAnchorSEI;
@property (nonatomic) BOOL hasReceivedOtherAnchorSEI;
@property (nonatomic) BOOL hasReceivedMicUsersList;

- (void).cxx_destruct;

@end
