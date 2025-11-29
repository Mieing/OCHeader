@class NSError;

@interface IRISDataResponseInfo : NSObject

@property (retain, nonatomic) id response;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
