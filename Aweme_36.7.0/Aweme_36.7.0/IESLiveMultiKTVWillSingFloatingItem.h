@class IESLiveMultiKTVWillSingCell, IESLiveKtvSongStruct;

@interface IESLiveMultiKTVWillSingFloatingItem : NSObject

@property (retain, nonatomic) IESLiveKtvSongStruct *model;
@property (nonatomic) BOOL isLinked;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESLiveMultiKTVWillSingCell *cell;

- (void).cxx_destruct;

@end
