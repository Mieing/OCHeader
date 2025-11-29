@class NSString, NSArray, NSDictionary, NSNumber;

@interface IESECMallDeepFeedProductCoverVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vid;
@property (retain, nonatomic) NSArray *src;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSArray *coverUrlList;
@property (copy, nonatomic) NSString *placeHolderImageURL;
@property (retain, nonatomic) NSDictionary *awemeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
