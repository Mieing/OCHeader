@class NSString, IESECURLModel, NSNumber;

@interface IESECGoodsFullReturnModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *fullReturnBGImage;
@property (retain, nonatomic) IESECURLModel *eventIcon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *transactionThreshold;
@property (retain, nonatomic) NSNumber *userTotalTransaction;
@property (nonatomic) unsigned long long eventStatus;
@property (copy, nonatomic) NSString *descSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
