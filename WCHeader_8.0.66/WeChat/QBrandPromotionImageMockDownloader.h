@class NSString;

@interface QBrandPromotionImageMockDownloader : NSObject <QBrandPromotionImageDownloader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestLogoImageWithViewItem:(id)a0;
- (void)cancelRequestWithViewItem:(id)a0;

@end
