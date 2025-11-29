@class NSMutableDictionary, IESLiveSEIReceiver, IESLiveBackupSEIReceiver, UIView, IESLiveStreamAbnormalAction, NSMutableArray;
@protocol IESLivePaidStreamProvider;

@interface IESLivePlayerAttachment : NSObject

@property (retain, nonatomic) id<IESLivePaidStreamProvider> paidStream;
@property (nonatomic) long long playerSourceType;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } customFrame;
@property (retain, nonatomic) UIView *bizView;
@property (retain, nonatomic) UIView *bizViewSuperView;
@property (nonatomic) double multiLinkerStreamOffset;
@property (nonatomic) BOOL feedEnterRoomPlayerLayoutOptEnable;
@property (retain, nonatomic) IESLiveSEIReceiver *seiReceiver;
@property (readonly, nonatomic) IESLiveBackupSEIReceiver *backupSEIReceiver;
@property (retain, nonatomic) IESLiveStreamAbnormalAction *abnormalAction;
@property (nonatomic) BOOL isInRoom;
@property (retain, nonatomic) NSMutableDictionary *tagAttributes;
@property (retain, nonatomic) NSMutableArray *closeObservers;

- (void)setupSEIReceiverWithDIContext:(id)a0 withPlayer:(id)a1;
- (void)removeAllTagAttributesWithCallTrace:(id)a0;
- (void)updateAttributesInfo:(id)a0 callTrace:(id)a1;
- (id)tagAttributesInfoWithCallTrace:(id)a0;
- (void)addPlayerDidCloseObserver:(id /* block */)a0;
- (void)notifyPlayerDidClose;
- (void)setupSEIReceiverWithPlayer:(id)a0;
- (void).cxx_destruct;

@end
