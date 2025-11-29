@class NSArray, AWEURLModel;

@interface AWENewScanImpl.AIGCQRCodeListModel : AWEBaseApiModel {
    void /* function */ aigcCodeList;
}

@property (nonatomic, copy) NSArray *aigcCodeList;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, retain) AWEURLModel *qrcodeURL;
@property (nonatomic, retain) AWEURLModel *avatarURL;

+ (id)qrcodeURLJSONTransformer;
+ (id)avatarURLJSONTransformer;
+ (id)aigcCodeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
