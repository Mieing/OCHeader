@class NSString, NSArray, AWEURLModel;

@interface AWENewScanImpl.ScanGuideModel : AWEBaseApiModel {
    void /* function */ desc;
}

@property (nonatomic, retain) AWEURLModel *icon;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, retain) NSArray *targetIDs;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconJSONTransformer;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
