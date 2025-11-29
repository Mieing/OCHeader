@class NSDictionary, AWESearchEcommercePhotoSearchDataResponse;

@interface AWEEcomSearchPhotoSearchResponse : NSObject

@property (retain, nonatomic) AWESearchEcommercePhotoSearchDataResponse *firstSectionResp;
@property (retain, nonatomic) AWESearchEcommercePhotoSearchDataResponse *secondSectionResp;
@property (copy, nonatomic) NSDictionary *firstSectionRawData;
@property (copy, nonatomic) NSDictionary *secondSectionRawData;
@property (nonatomic, getter=isLoadMore) BOOL loadMore;

- (void).cxx_destruct;

@end
