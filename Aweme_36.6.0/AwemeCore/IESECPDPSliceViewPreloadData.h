@class NSString, NSDictionary, UIView;

@interface IESECPDPSliceViewPreloadData : IESECBaseApiModel

@property (copy, nonatomic) NSString *sliceID;
@property (copy, nonatomic) NSString *templateURL;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) UIView *preloadView;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
