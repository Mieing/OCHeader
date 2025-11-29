@class NSDictionary, NSArray, IESGCPGameGetExplainCardEnterDataRoomContextModel;

@interface IESGCPGameGetExplainCardEnterDataDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL preRequestSuccess;
@property (copy, nonatomic) NSDictionary *responseData;
@property (copy, nonatomic) NSArray *pendingIMArray;
@property (retain, nonatomic) IESGCPGameGetExplainCardEnterDataRoomContextModel *roomContext;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
