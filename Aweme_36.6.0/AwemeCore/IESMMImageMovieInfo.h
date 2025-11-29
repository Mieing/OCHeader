@class AVAsset, NSMutableArray, NSMutableDictionary;

@interface IESMMImageMovieInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *imageArray;
@property (retain, nonatomic) NSMutableArray *imagePathArray;
@property (retain, nonatomic) NSMutableDictionary *imageShowDuration;
@property (retain, nonatomic) AVAsset *backGroundVideo;
@property (nonatomic) BOOL needTransition;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
