@class NSString;

@interface MMMusicMVTrackItemLocalVideo : NSObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *localId;
@property (nonatomic) unsigned int clipTimeOffsetMs;
@property (nonatomic) unsigned int clipTimeLengthMs;
@property (copy, nonatomic) NSString *localVideoPath;
@property (retain, nonatomic) NSString *localThumbPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_clipTimeOffsetMs;
+ (void)PBArrayAdd_clipTimeLengthMs;
+ (void)PBArrayAdd_localVideoPath;
+ (void)PBArrayAdd_localThumbPath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
