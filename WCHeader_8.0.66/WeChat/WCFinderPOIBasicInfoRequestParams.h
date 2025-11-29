@class NSString;

@interface WCFinderPOIBasicInfoRequestParams : NSObject

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiAddress;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) int commentScene;
@property (nonatomic) int fromCommentScene;
@property (nonatomic) BOOL isPrefetch;

- (void).cxx_destruct;

@end
