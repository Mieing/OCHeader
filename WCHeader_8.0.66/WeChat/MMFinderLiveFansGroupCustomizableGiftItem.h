@class NSArray, NSString, FinderLiveFanClubCustomGift, FinderLiveAnchorCustomGiftInfo_CustomItem, MMFinderLiveFansGroupCustomizableGiftColorVariant;

@interface MMFinderLiveFansGroupCustomizableGiftItem : NSObject

@property (retain, nonatomic) FinderLiveFanClubCustomGift *customizableGift;
@property (retain, nonatomic) FinderLiveAnchorCustomGiftInfo_CustomItem *customizationItem;
@property (retain, nonatomic) NSArray *colorVariants;
@property (readonly, nonatomic) BOOL customizationTypeSupported;
@property (readonly, nonatomic) NSString *customizableGiftId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float selectedVariantWebeansValue;
@property (readonly, nonatomic) BOOL supportsColorCustomization;
@property (readonly, nonatomic) BOOL supportsTextAttachment;
@property (readonly, nonatomic) unsigned long long maximumChangeCount;
@property (readonly, nonatomic) BOOL changeThrottled;
@property (readonly, nonatomic) unsigned long long textAttachmentMaxLength;
@property (retain, nonatomic) MMFinderLiveFansGroupCustomizableGiftColorVariant *selectedVariant;
@property (retain, nonatomic) NSString *attachedText;

- (id)initWithCustomizableGift:(id)a0 customizationItem:(id)a1 resourceFetcher:(id)a2;
- (id)customizationItemWithCurrentState;
- (void)decrementRemainingChangeCount;
- (void).cxx_destruct;

@end
