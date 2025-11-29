@class NSArray;

@interface IESTrackInfosManager : IESMMObject

@property (retain, nonatomic) NSArray *inputInfos;
@property (retain, nonatomic) NSArray *activeTrackInfos;
@property (retain, nonatomic) NSArray *deletedTrackInfos;
@property (retain, nonatomic) NSArray *addedTrackInfos;
@property (nonatomic) BOOL didChanged;
@property (nonatomic) BOOL hasBackGroundAsset;

- (id)getDeleteTrackID:(id)a0 newTrackID:(id)a1;
- (id)getAddTrackID:(id)a0 newTrackID:(id)a1;
- (id)getEffectTrackInfosFrom:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)isTimeRangeContainsTime:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 tolerance:(double)a2;
- (void)updateInputInfos:(id)a0;
- (void)updateCurrentTracks:(id)a0;
- (void)updateTracksInfoForRequest:(id)a0;
- (id)sourceTrackIds;
- (void).cxx_destruct;
- (id)init;

@end
