@class NSString, IESIMCodeGenUrlModel;

@interface IESIMCodeGenIMStickerModel : AWEBaseDataModel

@property (nonatomic) long long modelID;
@property (retain, nonatomic) IESIMCodeGenUrlModel *staticUrlModel;
@property (retain, nonatomic) IESIMCodeGenUrlModel *animateUrlModel;
@property (nonatomic) int stickerType;
@property (copy, nonatomic) NSString *authorSecUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
