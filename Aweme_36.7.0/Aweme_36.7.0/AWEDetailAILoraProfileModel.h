@class NSString, ACCAIGCLoraProfileModel, ACCAIGCLoraPersonInfo, NSNumber;

@interface AWEDetailAILoraProfileModel : AWEDetailCommonDiffableModel

@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL isLoraUGC;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *currentSelectLoraProfileModel;
@property (copy, nonatomic) NSNumber *canShowCell;
@property (nonatomic) unsigned long long selectIndex;

- (void).cxx_destruct;

@end
