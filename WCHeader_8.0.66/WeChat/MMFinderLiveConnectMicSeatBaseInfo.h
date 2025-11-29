@class NSString;

@interface MMFinderLiveConnectMicSeatBaseInfo : NSObject <NSCopying>

@property (nonatomic) unsigned long long micIndex;
@property (copy, nonatomic) NSString *seatName;
@property (nonatomic) BOOL isInOtherRoom;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)displayedSeatName;
- (id)displayedSeatFullName;
- (void).cxx_destruct;

@end
