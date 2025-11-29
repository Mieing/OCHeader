@class NSArray, NSDictionary, NSString, NSNumber;

@interface AWELiveAcqCastVideoMixListModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSDictionary *logPB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
