@class NSString, MMLiveGiftResourceDescriptor, MMFinderLiveRewardGiftItem;

@interface MMLiveGiftResourcesEnsuranceDownloadWorkItem : NSObject

@property (retain, nonatomic) MMLiveGiftResourceDescriptor *resourceDescriptor;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) NSString *fileUri;
@property (retain, nonatomic) NSString *fileMd5Hash;
@property (readonly, nonatomic) long long resourceType;
@property (readonly, nonatomic) NSString *resourceId;

- (id)initWithResourceDescriptor:(id)a0 giftItem:(id)a1;
- (void).cxx_destruct;

@end
