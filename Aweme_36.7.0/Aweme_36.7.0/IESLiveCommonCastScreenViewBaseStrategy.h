@class UIImage, NSString;
@protocol IESLiveRoomService, IESLiveCommonCastScreenViewHandlerDelegate, IESLiveCommonCastScreenBusiness;

@interface IESLiveCommonCastScreenViewBaseStrategy : NSObject <IESLiveCommonCastScreenViewStrategy>

@property (retain, nonatomic) id<IESLiveCommonCastScreenBusiness> business;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UIImage *businessIcon;
@property (weak, nonatomic) id<IESLiveCommonCastScreenViewHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeScreenCast;
- (void)castScreenChangedWithStatus:(long long)a0;
- (void)setupCastBusinessIcon:(id)a0;
- (void)startCastWithCompletion:(id /* block */)a0;
- (void)stopCastWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBusiness:(id)a0;

@end
