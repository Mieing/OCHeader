@class IESLiveRoomGiftListMonitor, IESLiveGiftImageTemplate, NSString;
@protocol IESLiveGiftAPI;

@interface IESLiveRoomGiftListManager : NSObject <IESLiveGiftModuleGiftListInterface, IESLiveGiftImageTemplateService>

@property (retain, nonatomic) id<IESLiveGiftAPI> giftApi;
@property (retain, nonatomic) IESLiveRoomGiftListMonitor *monitor;
@property (nonatomic) BOOL enableMultiLevel;
@property (nonatomic) BOOL enableTemplate;
@property (retain, nonatomic) IESLiveGiftImageTemplate *pngTemplate;
@property (retain, nonatomic) IESLiveGiftImageTemplate *heicTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)baseGiftListInterface;
- (void)update:(id)a0 source:(long long)a1;
- (id)heicURLsWithImage:(id)a0;
- (id)fetchGiftListWithLinkParams:(id)a0 callback:(id /* block */)a1;
- (id)giftWithLiteGift:(id)a0;
- (id)internalFetchGiftListWithLinkParams:(id)a0 callback:(id /* block */)a1;
- (void)updateImageWithResponse:(id)a0;
- (void)handleLiteGiftToGiftWithData:(id)a0;
- (BOOL)isValidImageTemplate:(id)a0 source:(long long)a1;
- (void)updateImageIfNeededWithGifts:(id)a0 template:(id)a1;
- (void)updatePNGImageIfNeeded:(id)a0 template:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
