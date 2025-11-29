@class WCDataItem, WCMomentsTemplateShareInfo, WCMediaItem, UIImageView;

@interface MJTemplateFullScreenViewControllerParams : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCMomentsTemplateShareInfo *shareInfo;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) long long browseScene;

- (void).cxx_destruct;

@end
