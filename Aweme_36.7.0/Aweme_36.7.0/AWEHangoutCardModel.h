@class NSString, AWECodeGenInsertItemCardModel, AWEHangoutOperationCardModel, AWEHangoutCommonLynxCardModel;

@interface AWEHangoutCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEHangoutOperationCardModel *operationCard;
@property (retain, nonatomic) AWECodeGenInsertItemCardModel *insertItemCard;
@property (retain, nonatomic) AWEHangoutCommonLynxCardModel *commonLynxCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
