@class RACCompoundDisposable, NSString, IESLiveDanmakuEngineSettings, NSMutableArray, UIView;
@protocol IESLiveDanmakuChannelManagerDelegate;

@interface IESLiveDanmakuChannelManager : NSObject <IESLiveDanmakuChannelDelegate, IESLiveDanmakuChannelDataSource, IESLiveDanmakuChannelManagerProtocol>

@property (nonatomic) unsigned long long channelType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } channelArea;
@property (nonatomic) double channelHeight;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveDanmakuEngineSettings *danmukuSettings;
@property (retain, nonatomic) NSMutableArray *channels;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (nonatomic) BOOL isRemovingAllDanmuku;
@property (weak, nonatomic) id<IESLiveDanmakuChannelManagerDelegate> delegate;
@property (copy, nonatomic) id /* block */ danmakuShowInScreenWithNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)removeAllDanmuku;
- (void)_removeChannelsObserve;
- (id)initWithContentView:(id)a0 settings:(id)a1;
- (void)resetChannel;
- (BOOL)hasAvailableChannelForGift;
- (BOOL)hasAvailableChannel;
- (id)availableChannel;
- (id)availableChannelForPrivilegeDanmaku:(id)a0;
- (id)availableBusinessDanmakuChannel;
- (id)availableChannel:(id)a0;
- (void)newChannelAvailable:(id)a0;
- (void)_addChannelsObserve;
- (id)availableChannelsForAll;
- (void)danmakuChannel:(id)a0 danmakuDidFireWithNode:(id)a1;
- (void)danmakuChannel:(id)a0 danmakuDidLeaveWithNode:(id)a1;
- (double)danmakuChannel:(id)a0 danmakuViewTrailingAdjustForNode:(id)a1;
- (double)danmakuChannel:(id)a0 danmakuViewSpeedAdjustForNode:(id)a1;
- (void)updateChannelArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateChannelHeight:(double)a0;
- (unsigned long long)availableChannelsCount;
- (id)findAvailableChannelForNode:(id)a0;
- (id)initWithChannelType:(unsigned long long)a0 contentView:(id)a1 settings:(id)a2;
- (BOOL)hasAvailableChannelForNode:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)availableChannels;

@end
