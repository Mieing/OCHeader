@class UIImage, NSMutableArray, NSMutableDictionary;

@interface IntelligentFaceAlbumData : IntelligentMediaItem

@property (retain, nonatomic) UIImage *picImage;
@property (retain, nonatomic) NSMutableArray *arrLabelId;
@property (retain, nonatomic) NSMutableDictionary *dicFaceAlbumLable;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) unsigned int faceClusterTime;
@property (nonatomic) BOOL bIsPoliticalLeader;

- (void).cxx_destruct;

@end
