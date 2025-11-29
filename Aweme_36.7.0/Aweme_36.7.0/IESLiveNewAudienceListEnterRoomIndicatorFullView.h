@class NSTimer, UIImageView, UILabel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveNewAudienceListEnterRoomIndicatorFullView : UIView

@property (nonatomic) BOOL isShowed;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (retain, nonatomic) UILabel *newOrderLabel;
@property (retain, nonatomic) UILabel *secondLineLabel;
@property (retain, nonatomic) UIImageView *secondLineIcon;

- (void)invalidateCountdownTimer;
- (void)addNewOrderName:(id)a0;
- (void)setupSubviewsFrame;
- (void)scrollAniamation;
- (void)removeAllTitles;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupTimer;
- (void)addTitle:(id)a0;
- (unsigned long long)titlesCount;
- (id)titleAtIndex:(unsigned long long)a0;
- (void)setupViews;
- (id)initWithTitles:(id)a0;

@end
