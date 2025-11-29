@class NSString, NSNumber;

@interface AWEAIOriginalRequestParams : AWESearchResultCachalotRequestParams

@property (copy, nonatomic) NSString *docKey;
@property (copy, nonatomic) NSString *authorUID;
@property (copy, nonatomic) NSString *layoutStyle;
@property (copy, nonatomic) NSString *isNewFrameWorkV2;
@property (copy, nonatomic) NSNumber *isHubbleShowDoubleColumn;
@property (copy, nonatomic) NSNumber *isShowDoubleColumn;

- (id)generateParams;
- (void).cxx_destruct;

@end
