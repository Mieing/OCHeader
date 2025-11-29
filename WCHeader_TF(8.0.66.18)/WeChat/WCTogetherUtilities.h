@interface WCTogetherUtilities : NSObject

+ (void)adjustPrivacyForUploadTask:(id)a0;
+ (BOOL)equalTogetherUsersWithDataItem1:(id)a0 dataItem2:(id)a1;
+ (BOOL)containsTogetherUsername:(id)a0 inDataItem:(id)a1;
+ (void)enumerateContainingDataItemFromDataItems:(id)a0 withQueryIDs:(id)a1 usingBlock:(id /* block */)a2;
+ (id)containingIndexesFromDataItems:(id)a0 withQueryIDs:(id)a1;

@end
