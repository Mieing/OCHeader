@class NSString, NSMutableSet;
@protocol AWEPostPageContext, AWEPostPageInputControllerProtocol;

@interface AWEPostPageInputHandler : NSObject <AWEPostPageInputService>

@property (retain, nonatomic) NSMutableSet *extraHashtags;
@property (retain, nonatomic) NSString *challengeTitle;
@property (weak, nonatomic) id<AWEPostPageInputControllerProtocol> input;
@property (nonatomic) long long collectHashtagsSig;
@property (nonatomic) BOOL switchInputButtonSelectedSignal;
@property (readonly, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)updateChallengeTitle:(id)a0;
- (void)addExtraHashtags:(id)a0;
- (id)allExtraHashtagArray;
- (void).cxx_destruct;

@end
