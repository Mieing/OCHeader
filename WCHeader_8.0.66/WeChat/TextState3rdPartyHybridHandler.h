@protocol TextState3rdPartyHandler;

@interface TextState3rdPartyHybridHandler : TextState3rdPartyBaseHandler

@property (retain, nonatomic) id<TextState3rdPartyHandler> appearHandler;
@property (retain, nonatomic) id<TextState3rdPartyHandler> jumpHandler;

- (id)initWithJumpHandler:(id)a0 appearHandler:(id)a1;
- (unsigned int)type;
- (BOOL)supportCustomMedia;
- (id)title;
- (id)headImageView;
- (BOOL)useCoverForContent;
- (BOOL)doHeadImageActionWithViewController:(id)a0;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (BOOL)autoHandleAppLifeCycleEvent;
- (id)mediaDescription;
- (void)checkValidWithCompletionBlock:(id /* block */)a0 cacheOnly:(BOOL)a1;
- (BOOL)isValid;
- (BOOL)canGetSourceInfoForRefer;
- (void)getSourceInfoForReferWithCompletionBlock:(id /* block */)a0;
- (id)reportActivityId;
- (BOOL)preferCustomView;
- (id)customView;
- (id)name;
- (BOOL)doSourceActionWithViewController:(id)a0 scene:(unsigned int)a1;
- (BOOL)isHybrid;
- (id)initWithBuffer:(id)a0 keyBuffer:(id)a1;
- (void).cxx_destruct;

@end
