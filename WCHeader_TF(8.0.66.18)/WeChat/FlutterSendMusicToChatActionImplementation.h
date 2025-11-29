@class NSString;

@interface FlutterSendMusicToChatActionImplementation : NSObject <FlutterSendMusicToChatAction, MMFlutterPlugin>

@property (copy, nonatomic) NSString *toUsername;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithToUsername:(id)a0 handler:(id /* block */)a1;
- (void)onAttachedToEngine:(id)a0;
- (void)sendMusicToChatRequest:(id)a0 error:(id *)a1;
- (id)getChatUserNameWithError:(id *)a0;
- (void).cxx_destruct;

@end
