@class NSDictionary, NSString;

@interface IESGurdPackagesConfigResponse : NSObject

@property (retain, nonatomic) id packages;
@property (retain, nonatomic) NSDictionary *local;
@property (copy, nonatomic) NSString *logId;

- (void).cxx_destruct;

@end
