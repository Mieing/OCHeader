@class NSString;

@interface IESLivePKServiceImpl : NSObject <IESLivePKService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealWithDoubleInterationSEI:(id)a0 isPreview:(BOOL)a1 isAudioRoom:(BOOL)a2 roomScene:(long long)a3 completion:(id /* block */)a4;
- (void)dealWithDoubleInterationResult:(id)a0 isPreview:(BOOL)a1 roomScene:(long long)a2 isPCVerticalRoom:(BOOL)a3 isAudioRoom:(BOOL)a4 completion:(id /* block */)a5;
- (void)dealShareWithDoubleInterationSEI:(id)a0 roomScene:(long long)a1 containerView:(id)a2 completion:(id /* block */)a3;
- (double)askPlayerTopOffsetWithSEIResult:(id)a0;
- (void)asyncParseSEI:(id)a0 completion:(id /* block */)a1;
- (void)dealShareWithDoubleInterationResult:(id)a0 roomScene:(long long)a1 containerView:(id)a2 completion:(id /* block */)a3;

@end
