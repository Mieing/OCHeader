@class NSString, BDByteScreenCastManager;
@protocol BDByteScreenCastVideoContextDelegate;

@interface BDByteScreenCastVideoContext : NSObject

@property (class, retain, nonatomic) BDByteScreenCastVideoContext *current;

@property (nonatomic) BOOL hasSecondScreen;
@property (nonatomic) BOOL isNotifying;
@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *videoID;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, nonatomic) BDByteScreenCastManager *manager;
@property (weak, nonatomic) id<BDByteScreenCastVideoContextDelegate> delegate;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) BOOL autoConnectToAirPlayDisplay;
@property (nonatomic) BOOL autoDisconnectToAirPlayDisplay;

- (id)initWithVideoID:(id)a0;
- (void)secondScreenDidChange:(id)a0;
- (void)notifyEagerNotificationIfNeeded;
- (BOOL)isEagerToPrepareManager;
- (void)leaveWithNewContext:(id)a0;
- (void)enterWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)leave;
- (void)commonInit;
- (BOOL)isEqual:(id)a0;
- (id)initWithUrl:(id)a0;

@end
