@class NSString, NSMutableArray;

@interface AWEPublishReeditTrackModel : NSObject

@property (retain, nonatomic) NSString *awemeMusicId;
@property (nonatomic) BOOL isOfflineAwemeMusicId;
@property (retain, nonatomic) NSString *musicIdBeforePublishPage;
@property (retain, nonatomic) NSString *musicIdViewDidLoad;
@property (retain, nonatomic) NSMutableArray *musicIdsBeforePreview;
@property (retain, nonatomic) NSMutableArray *musicIdsViewDidAppear;
@property (retain, nonatomic) NSString *finalMusicId;
@property (retain, nonatomic) NSString *finalAwemeMusicId;

- (void).cxx_destruct;

@end
