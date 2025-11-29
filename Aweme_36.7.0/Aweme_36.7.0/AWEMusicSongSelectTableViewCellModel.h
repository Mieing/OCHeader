@class NSURL, NSString, AWEMusicFeedViewModel;

@interface AWEMusicSongSelectTableViewCellModel : NSObject

@property (retain, nonatomic) AWEMusicFeedViewModel *feedModel;
@property (retain, nonatomic) NSURL *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSString *songFrom;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL showPreviewTag;
@property (nonatomic) long long cellHeight;

- (id)initWithMusicModel:(id)a0;
- (void).cxx_destruct;

@end
