@class RTVEffectGameModel, NSDictionary, RTVInteractionInitialAction, NSString;

@interface RTVEffectGameContext : NSObject <RTVInteractionContext>

@property (readonly, nonatomic) long long enterFrom;
@property (readonly, nonatomic) BOOL isFromInteractionTypeChange;
@property (readonly, nonatomic) BOOL isInitialGameUsed;
@property (readonly, nonatomic) RTVEffectGameModel *initialGameModel;
@property (readonly, nonatomic) RTVInteractionInitialAction *initialAction;
@property (readonly, copy, nonatomic) NSDictionary *trackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterFrom:(long long)a0 trackDict:(id)a1;
- (void)updateInitialGameModel:(id)a0;
- (void)updateIsFromInteractionTypeChange:(BOOL)a0;
- (void)updateIsInitialGameUsed:(BOOL)a0;
- (void).cxx_destruct;

@end
