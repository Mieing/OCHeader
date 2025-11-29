@class WCPlayerPlayArgs, NSString, WCPlayerConfigControlView, UIImageView, WAPlayerHttpMediaWrap, WCPlayerView;

@interface WAMediaPreviewItem : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *thumb;
@property (retain, nonatomic) WAPlayerHttpMediaWrap *mediaWrap;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (retain, nonatomic) WCPlayerConfigControlView *playerControlView;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (nonatomic) unsigned long long downloadCompleteOperateType;

- (void).cxx_destruct;

@end
