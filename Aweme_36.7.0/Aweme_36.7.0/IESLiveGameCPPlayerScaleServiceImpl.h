@class NSString;

@interface IESLiveGameCPPlayerScaleServiceImpl : NSObject <IESGCPLivePlayerScaleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openRightPanel:(long long)a0 contentView:(id)a1 config:(id)a2 openCompletion:(id /* block */)a3 closeCompletion:(id /* block */)a4;
- (void)closeRightPanel:(id /* block */)a0;

@end
