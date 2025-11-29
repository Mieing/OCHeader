@class NSString, AWEIMCodeGenLoraSlotDetailModel, AWEIMCodeGenPhotoInfoModel;

@interface AWEIMCodeGenMixPhotoShareInfoModel : AWEBaseDataModel

@property (nonatomic) long long shareTaskId;
@property (nonatomic) long long styleType;
@property (copy, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *styleTitle;
@property (copy, nonatomic) NSString *styleUrl;
@property (nonatomic) long long mixNumUpperLimit;
@property (retain, nonatomic) AWEIMCodeGenPhotoInfoModel *photoModel;
@property (retain, nonatomic) AWEIMCodeGenLoraSlotDetailModel *loraSlotDetailModel;
@property (nonatomic) long long shareTime;
@property (nonatomic) long long userID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
