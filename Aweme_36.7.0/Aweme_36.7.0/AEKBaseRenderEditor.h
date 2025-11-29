@class NSString, AEKBaseData, AEKCoreUnitImpl;
@protocol AEKSubscriberProvider;

@interface AEKBaseRenderEditor : NSObject <AEKRenderEditor, AEKEditorConvertible>

@property (retain, nonatomic) AEKBaseData *baseData;
@property (weak, nonatomic) id<AEKSubscriberProvider> subscriberProvider;
@property (weak, nonatomic) AEKCoreUnitImpl *coreUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)syncRefreshCurrentFrame:(double)a0;
- (id)asyncRefreshCurrentFrame;
- (id)asyncForceModeRefreshCurrentFrame;
- (BOOL)needToCommit;
- (id)forceCommitStickerParam:(id)a0;
- (id)initWithBaseData:(id)a0 subscriberProvider:(id)a1 coreUnit:(id)a2;
- (BOOL)done:(id)a0;
- (void).cxx_destruct;
- (BOOL)done;
- (id)commit;
- (id)render;
- (id)render:(id /* block */)a0;

@end
