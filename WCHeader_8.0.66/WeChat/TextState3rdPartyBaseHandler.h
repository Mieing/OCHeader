@class NSString, TextState3rdPartyContext;

@interface TextState3rdPartyBaseHandler : NSObject <TextState3rdPartyHandler>

@property (readonly, nonatomic) unsigned int type;
@property (retain, nonatomic) TextState3rdPartyContext *context;
@property (readonly, nonatomic) BOOL preferCustomView;
@property (readonly, nonatomic) BOOL useCoverForContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportCustomMedia;
- (BOOL)supportCustomCover;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (id)title;
- (id)headImageView;
- (id)customView;
- (id)name;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)doHeadImageActionWithViewController:(id)a0;
- (id)reportActivityId;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)mediaDescription;
- (void)checkValidWithCompletionBlock:(id /* block */)a0 cacheOnly:(BOOL)a1;
- (BOOL)isValid;
- (BOOL)canGetSourceInfoForRefer;
- (void)getSourceInfoForReferWithCompletionBlock:(id /* block */)a0;
- (BOOL)isHybrid;
- (BOOL)needUpdateBizData;
- (BOOL)dataReady;
- (id)updateBizData;
- (void).cxx_destruct;

@end
