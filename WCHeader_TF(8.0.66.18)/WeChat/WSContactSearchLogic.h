@class NSString;
@protocol WSContactSearchLogicDelegate;

@interface WSContactSearchLogic : NSObject <IFTSContactMgrExt>

@property (retain, nonatomic) NSString *newestQueryText;
@property (nonatomic) unsigned int bussinessType;
@property (retain, nonatomic) NSString *taskKey;
@property (weak, nonatomic) id<WSContactSearchLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBussinessType:(unsigned int)a0;
- (void)dealloc;
- (void)cancelSearch;
- (void)handleTextChanged:(id)a0;
- (void)delaySearch:(id)a0 slowMode:(BOOL)a1;
- (void)delaySearchImp:(id)a0;
- (void)onFTSContactSearchFinish:(id)a0;
- (void).cxx_destruct;

@end
