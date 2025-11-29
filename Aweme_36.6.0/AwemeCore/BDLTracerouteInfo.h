@class NSString, NSMutableArray;

@interface BDLTracerouteInfo : NSObject

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) double timeStamp;
@property (copy, nonatomic) NSString *networkType;
@property (copy, nonatomic) NSString *cmd;
@property (copy, nonatomic) NSString *execInfo;
@property (retain, nonatomic) NSMutableArray *hopInfo;

- (void).cxx_destruct;

@end
