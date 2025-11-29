@class NSString, UIImage, UIView;
@protocol WABGAudioMinimizationHostPlayerProtocol;

@interface WABGAudioMinimizationItemInfo : NSObject

@property (retain, nonatomic) NSString *hostId;
@property (weak, nonatomic) id hostView;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appUsrName;
@property (retain, nonatomic) NSString *appDisplayName;
@property (nonatomic) unsigned int appDebugMode;
@property (nonatomic) BOOL isGameApp;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<WABGAudioMinimizationHostPlayerProtocol> hostPlayer;
@property (weak, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) id /* block */ operateAction;

- (id)taskBizName;
- (id)taskBizKey;
- (void).cxx_destruct;

@end
