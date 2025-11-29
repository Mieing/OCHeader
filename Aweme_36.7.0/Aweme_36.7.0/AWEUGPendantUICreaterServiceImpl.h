@class NSString;

@interface AWEUGPendantUICreaterServiceImpl : HTSService <AWEUGPendantUICreaterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeBubbleView:(id)a0;
+ (id)createPendantContentViewWithUIInfo:(id)a0;
+ (void)updatePendantContentViewWithUIInfo:(id)a0 contentView:(id)a1;
+ (id)createPendantCloseViewWithUIInfo:(id)a0;
+ (void)updatePendantCloseViewWithUIInfo:(id)a0 closeButton:(id)a1;
+ (id)createPendantCapsuleWithUIInfo:(id)a0;
+ (void)updatePendantCapsuleWithUIInfo:(id)a0 capsule:(id)a1;
+ (id)createPendantCountDownViewWithUIInfo:(id)a0;
+ (void)updatePendantCountDownViewWithUIInfo:(id)a0 capsule:(id)a1;
+ (id)createPendantProgressWithUIInfo:(id)a0;
+ (id)createPendantProgressWithUIInfo:(id)a0 type:(unsigned long long)a1;
+ (void)updatePendantProgressWithUIInfo:(id)a0 progressView:(id)a1;
+ (id)createPendantBubbleViewWithUIInfo:(id)a0 contentView:(id)a1 cotainerView:(id)a2 isRightSide:(BOOL)a3 isEdged:(BOOL)a4 completion:(id /* block */)a5;


@end
