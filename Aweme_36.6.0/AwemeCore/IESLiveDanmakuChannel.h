@class NSMutableArray, UIView;
@protocol IESLiveDanmakuEngineSettingsProtocol, IESLiveDanmakuChannelDelegate, IESLiveDanmakuChannelDataSource;

@interface IESLiveDanmakuChannel : NSObject

@property (nonatomic) BOOL isChannelAvailable;
@property (nonatomic) unsigned long long channelType;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<IESLiveDanmakuEngineSettingsProtocol> settings;
@property (retain, nonatomic) NSMutableArray *showingDanmukuViews;
@property (retain, nonatomic) NSMutableArray *reusableDanmukuViews;
@property (weak, nonatomic) id<IESLiveDanmakuChannelDelegate> delegate;
@property (weak, nonatomic) id<IESLiveDanmakuChannelDataSource> datasource;
@property (nonatomic) unsigned long long showingGiftCounter;
@property (nonatomic) BOOL freeze;
@property (copy, nonatomic) id /* block */ availableBlock;
@property (nonatomic) double offsetY;

- (void)removeAllDanmuku;
- (id)initWithChannelType:(unsigned long long)a0 contentView:(id)a1 settings:(id)a2 offsetY:(double)a3;
- (id)_dequeueReusableDanmukuViewWithNode:(id)a0;
- (id)findDanmuViewForNode:(id)a0;
- (BOOL)addDanmukuNode:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;

@end
