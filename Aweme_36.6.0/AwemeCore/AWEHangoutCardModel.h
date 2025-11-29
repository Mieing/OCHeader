@class AWEHangoutCommonLynxCardModel, AWEHangoutJumpSatisfactionCardModel, NSString, AWEHangoutLightSatisfactionCardModel, AWEHangoutSearchCardModel, AWEHangoutOperationCardModel, AWECodeGenInsertItemCardModel;

@interface AWEHangoutCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEHangoutSearchCardModel *searchCard;
@property (retain, nonatomic) AWEHangoutOperationCardModel *operationCard;
@property (retain, nonatomic) AWEHangoutLightSatisfactionCardModel *lightSatisfactionCard;
@property (retain, nonatomic) AWEHangoutJumpSatisfactionCardModel *jumpSatisfactionCard;
@property (retain, nonatomic) AWECodeGenInsertItemCardModel *insertItemCard;
@property (retain, nonatomic) AWEHangoutCommonLynxCardModel *commonLynxCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
