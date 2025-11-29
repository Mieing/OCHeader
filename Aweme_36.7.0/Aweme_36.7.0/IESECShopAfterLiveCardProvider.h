@class NSString, IESECTracker;

@interface IESECShopAfterLiveCardProvider : NSObject <IESECShopAfterLiveCardProviderService> {
    IESECTracker *_tracker;
}

@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *cid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeProviderWithTracker:(id)a0;

- (id)shopAfterLiveCardWithData:(id)a0 containerWidth:(double)a1;
- (void)redirectToShopPage:(id)a0;
- (void).cxx_destruct;

@end
