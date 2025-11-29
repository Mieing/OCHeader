@class NSNumber, NSString;

@interface IESLiveAnchorGiftPreferenceIMP : NSObject <IESLiveAnchorGiftPreferenceService>

@property (nonatomic) long long notAllowGiftReason;
@property (readonly, nonatomic) NSNumber *giftAuthNumForRequest;
@property (nonatomic) BOOL allowGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;

@end
