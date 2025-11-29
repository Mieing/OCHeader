@class BDPSharePrepareModel, NSDictionary, BDPShareResultModel, NSNumber, BDPUniqueID;

@interface AWEDefaultShareProcessModel : NSObject

@property (nonatomic) BOOL useBigIMType;
@property (copy, nonatomic) NSNumber *msgType;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPSharePrepareModel *prepareModel;
@property (retain, nonatomic) BDPShareResultModel *resultModel;
@property (copy, nonatomic) NSDictionary *messageContent;
@property (copy, nonatomic) id /* block */ contextHandler;
@property (copy, nonatomic) id /* block */ configurationHandler;

- (void).cxx_destruct;

@end
