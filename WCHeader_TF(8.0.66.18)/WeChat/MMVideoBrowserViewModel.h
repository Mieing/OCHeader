@class WCPlayerPlayArgs, AVAsset, NSString, CMessageWrap, NSURL;

@interface MMVideoBrowserViewModel : NSObject <MMMediaBrowserViewModel>

@property (nonatomic) BOOL isEnableZoom;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) WCPlayerPlayArgs *playArgs;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) NSString *videoAssetID;
@property (retain, nonatomic) NSURL *videoAssetUrl;
@property (readonly, nonatomic) int mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0;
- (id)getPlayArgs;
- (id)generatePlayArgs;
- (id)generateDownloadArgsWrap;
- (id)thumbImage;
- (id)viewClassName;
- (id)title;
- (id)subTitle;
- (id)getForwardMessageWrap;
- (id)generateFavItem;
- (id)generateVideoInfo;
- (void).cxx_destruct;

@end
