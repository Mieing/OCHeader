@class NSArray, NSString;

@interface AWEPOIPublishDataRecorder : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL shouldNotRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)recorderWithString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getJsonRecordData;
- (id)selectedDataWithModel:(id)a0;
- (void)recordAction:(id)a0 actionData:(id)a1 publishModel:(id)a2;
- (void)trackDataWithParams:(id)a0;
- (void).cxx_destruct;

@end
