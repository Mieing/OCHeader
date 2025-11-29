@class MMFinderLiveConnectMicUser;

@interface MMFinderLiveConnectMicAnchorCollectionDisplayItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *micUser;

- (id)initWithType:(unsigned long long)a0 micUser:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
