@class NSArray;
@protocol BDUGLuckyColdPopupData;

@interface BDUGLuckyColdPopup : BDUGLuckyBDModel

@property (copy, nonatomic) NSArray<BDUGLuckyColdPopupData> *coldPopups;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
