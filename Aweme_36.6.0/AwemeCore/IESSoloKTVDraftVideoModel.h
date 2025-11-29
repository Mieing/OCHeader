@class NSString, NSMutableArray, IESSoloKTVDraftColorsModel;

@interface IESSoloKTVDraftVideoModel : NSObject

@property (retain, nonatomic) NSString *videoID;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSMutableArray *videoURLs;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) IESSoloKTVDraftColorsModel *colors;

- (BOOL)checkPathExist;
- (void).cxx_destruct;
- (id)init;

@end
