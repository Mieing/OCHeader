@class AWEGDImageTabModel, NSArray, NSDictionary, NSString, AWEGDImageActionCommonParams;

@interface AWEGDImageVOModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *itemInfoList;
@property (retain, nonatomic) AWEGDImageActionCommonParams *actionCommonParams;
@property (retain, nonatomic) AWEGDImageTabModel *itemTabInfo;
@property (copy, nonatomic) NSArray *pointInfoList;
@property (copy, nonatomic) NSArray *containerPoint;
@property (nonatomic) long long height;
@property (nonatomic) long long pointDelayShowTime;
@property (nonatomic) BOOL showLoadingImage;
@property (copy, nonatomic) NSDictionary *commonTrackingParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemInfoListJSONTransformer;
+ (id)pointInfoListJSONTransformer;
+ (id)containerPointJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
