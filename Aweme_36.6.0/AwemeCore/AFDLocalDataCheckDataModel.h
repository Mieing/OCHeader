@class AFDLocalDataCheckParamsModel, AFDLocalDataMessageModel;

@interface AFDLocalDataCheckDataModel : AWEBaseApiModel

@property (retain, nonatomic) AFDLocalDataMessageModel *messageModel;
@property (retain, nonatomic) AFDLocalDataCheckParamsModel *paramsModel;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithMessageModel:(id)a0 paramsModel:(id)a1;
- (void).cxx_destruct;

@end
