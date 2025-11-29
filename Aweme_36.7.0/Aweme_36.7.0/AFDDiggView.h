@class NSString, UILabel, AWECollectionButton, UIView;

@interface AFDDiggView : UIView <AFDDiggViewProtocol>

@property (copy, nonatomic) id /* block */ performExpandAnimationBlock;
@property (copy, nonatomic) id /* block */ performShortenAnimationBlock;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isExpended;
@property (retain, nonatomic) AWECollectionButton *likeUserMoodBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupAnimation;
- (void)expend;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)setup;
- (void)shorten;

@end
