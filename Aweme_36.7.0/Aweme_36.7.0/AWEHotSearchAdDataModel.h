@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEHotSearchAdDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) NSArray *itemIDList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clickTrackURLListJSONTransformer;
+ (id)trackUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
