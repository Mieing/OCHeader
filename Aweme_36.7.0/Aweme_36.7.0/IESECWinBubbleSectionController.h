@class IESECServiceProxy, IESECWinBubbleObject, FBKVOController, IESECWinContext;
@protocol IESECWinLynxCardService, IESECWinBubbleService, IESECWinSplitService;

@interface IESECWinBubbleSectionController : IGListSectionController

@property (nonatomic) BOOL extraSchemaOpened;
@property (nonatomic) BOOL bubblePageShowed;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECWinBubbleObject *object;
@property (retain, nonatomic) FBKVOController *KVOController;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBubbleService> *bubbleService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)showGuidePopover;
- (void)clickBubbleWithIndex:(long long)a0;
- (void)showBubbleWithIndex:(long long)a0;
- (id)getBubbleCellWithIndex:(long long)a0;
- (unsigned long long)getGuidePopoverDirectionWithBubbleIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
