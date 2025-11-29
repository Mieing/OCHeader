@class WCFinderDataItem, NSString;

@interface MMLiveAvatarBackgroundViewDataItemDataSource : NSObject <MMLiveAvatarBackgroundViewDataSource>

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (readonly, nonatomic) NSString *adCoverImageUri;
@property (readonly, nonatomic) NSString *coverImageUri;
@property (readonly, nonatomic) BOOL isAnchor;
@property (readonly, nonatomic) BOOL isKtvMode;
@property (readonly, nonatomic) NSString *anchorIdentityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
