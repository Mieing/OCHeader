@interface IESECTabKitTimingMetric : NSObject

@property (nonatomic) double t_page_route_start;
@property (nonatomic) double t_page_init_start;
@property (nonatomic) double t_page_init_end;
@property (nonatomic) double t_request_start;
@property (nonatomic) double t_request_end;
@property (nonatomic) double t_start_pre_create_annie;
@property (nonatomic) double t_finish_pre_create_annie_model;
@property (nonatomic) double t_finish_pre_create_annie_web;

- (id)toDic;

@end
