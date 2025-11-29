@class NSString, AWEIMMixShareDetailInfoModel_SlotDetail, AWEIMMixShareDetailInfoModel_PhotoInfo;

@interface AWEIMMixShareDetailInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long shareTaskId;
@property (copy, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *styleTitle;
@property (copy, nonatomic) NSString *styleUrl;
@property (nonatomic) long long mixNumUpperLimit;
@property (nonatomic) long long shareTime;
@property (nonatomic) long long styleType;
@property (copy, nonatomic) AWEIMMixShareDetailInfoModel_PhotoInfo *photoInfo;
@property (copy, nonatomic) AWEIMMixShareDetailInfoModel_SlotDetail *loraSlotDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)photoInfoJSONTransformer;
+ (id)loraSlotDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
