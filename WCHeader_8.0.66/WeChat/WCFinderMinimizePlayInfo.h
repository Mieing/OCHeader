@class WCFinderContextIdToken, NSString, NSMutableDictionary, UIView, WCFinderDataItem;
@protocol WCFinderMinimizeContentViewProtocol;

@interface WCFinderMinimizePlayInfo : NSObject

@property (nonatomic) BOOL allowPlay;
@property (retain, nonatomic) NSString *forbidenPlayToast;
@property (retain, nonatomic) NSMutableDictionary *extInfo;
@property (nonatomic) BOOL mediaIsMute;
@property (retain, nonatomic) UIView<WCFinderMinimizeContentViewProtocol> *contentView;
@property (retain, nonatomic) UIView *minimizeAnimatingView;
@property (nonatomic) long long infoState;
@property (nonatomic) long long infoPlayType;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (nonatomic) double playProgress;
@property (nonatomic) double playbackTime;
@property (retain, nonatomic) WCFinderContextIdToken *contextToken;
@property (readonly) int commentScene;

- (id)description;
- (void).cxx_destruct;

@end
