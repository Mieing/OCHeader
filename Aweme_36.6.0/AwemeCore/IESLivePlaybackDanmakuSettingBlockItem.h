@class NSString, UIImage;

@interface IESLivePlaybackDanmakuSettingBlockItem : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *itemView;
@property (retain, nonatomic) UIImage *selectedView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) BOOL needAnchoring;
@property (copy, nonatomic) id /* block */ onItemTapped;

- (void).cxx_destruct;

@end
