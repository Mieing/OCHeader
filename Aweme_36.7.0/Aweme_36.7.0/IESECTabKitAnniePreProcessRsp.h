@class NSDictionary;

@interface IESECTabKitAnniePreProcessRsp : NSObject

@property (retain, nonatomic) id annieXCardModel;
@property (nonatomic) double t_start_pre_create_annie;
@property (nonatomic) double t_finish_pre_create_annie_model;
@property (copy, nonatomic) NSDictionary *updateGlobalProps;
@property (copy, nonatomic) NSDictionary *updateRouterParams;

- (void).cxx_destruct;

@end
