@class NSString, NSHashTable;

@interface IESLiveVSGiftPanelCommonReactionCenter : NSObject <IESLiveVSGiftPanelCommonReaction>

@property (retain, nonatomic) NSHashTable *reactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentDiamondDidUpdate:(id)a0;
- (void)currentSelectedItemChanged:(id)a0;
- (void)currentSelectedPageChanged:(id)a0;
- (void)guestInfoDidUpdate:(id)a0;
- (void)scrollToGiftPageWithIndex:(unsigned long long)a0;
- (void)changeCurrentTabWithIndex:(unsigned long long)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
