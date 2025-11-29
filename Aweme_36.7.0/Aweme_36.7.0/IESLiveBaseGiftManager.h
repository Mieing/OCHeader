@class IESLiveThreadSafeDictionary, NSString;

@interface IESLiveBaseGiftManager : NSObject <IESLiveGiftModuleBaseGiftListInterface>

@property (retain, nonatomic) IESLiveThreadSafeDictionary *gifts;
@property (nonatomic) long long currentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)clearGifts;
- (void)mergeWithGifts:(id)a0;
- (long long)baseGiftListVersion;
- (id)baseGiftWithGiftId:(id)a0;
- (void)updateWithGifts:(id)a0 requestVersion:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
