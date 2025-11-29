@class NSString, NSNumber;

@interface ACCPublishMusicTrackModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *musicShowRank;
@property (copy, nonatomic) NSString *selectedMusicID;
@property (retain, nonatomic) NSNumber *musicRecType;
@property (retain, nonatomic) NSNumber *musicRecTypeForAutoLoad;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
