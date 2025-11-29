@class NSString;

@interface MMMusicMVTrackItemLocalPic : NSObject <PBCoding, NSCopying>

@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *localPicPath;
@property (retain, nonatomic) NSString *picVideoPath;
@property (retain, nonatomic) NSString *picVideoThumbPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_localId;
+ (void)PBArrayAdd_localPicPath;
+ (void)PBArrayAdd_picVideoPath;
+ (void)PBArrayAdd_picVideoThumbPath;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
