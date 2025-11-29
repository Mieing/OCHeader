@class NSDictionary, NSString, IESECOrderListContext;

@interface IESECOrderListPreloadInfo : NSObject

@property (copy, nonatomic) NSDictionary *schemeBusinessParams;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) double saveTime;
@property (retain, nonatomic) NSDictionary *response;
@property (retain, nonatomic) IESECOrderListContext *context;

- (void).cxx_destruct;

@end
