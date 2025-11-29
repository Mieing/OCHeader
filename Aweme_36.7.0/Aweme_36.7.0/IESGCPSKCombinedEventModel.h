@class IESGCPSKCombinedResultModel, IESGCPSKCombinedCallBack, IESGCPSKContext;

@interface IESGCPSKCombinedEventModel : NSObject

@property (nonatomic) unsigned long long eventName;
@property (retain, nonatomic) IESGCPSKContext *context;
@property (retain, nonatomic) IESGCPSKCombinedResultModel *resultModel;
@property (retain, nonatomic) IESGCPSKCombinedCallBack *callBack;

- (void).cxx_destruct;

@end
