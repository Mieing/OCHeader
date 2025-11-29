@class IESLiveThreadSafeMutableArray;

@interface IESLiveGuestFaceGiftResourceMgr : NSObject

@property (retain, nonatomic) IESLiveThreadSafeMutableArray *guestFaceGiftAssetIdArray;
@property (nonatomic) long long fetchEffectMomentType;

- (void)generateGuestFaceGiftResourceAssetIdArrayWithGiftList:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
