@class MMLiteAppViewController, NSString;

@interface MMImageActionGameCircle : MMImageActionSheetItem <MMLiteAppExt>

@property (retain, nonatomic) MMLiteAppViewController *m_gameCircleViewController;
@property (retain, nonatomic) NSString *gameAppId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleWithImage;
- (id)createImageLocalId:(id)a0;
- (void)openGamePublishCenter:(id)a0;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)a0 appId:(id)a1 appUuid:(unsigned int)a2 extraData:(id)a3;
- (void).cxx_destruct;

@end
