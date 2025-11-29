@class NSString;
@protocol Optional;

@interface JSONAPIRPCErrorModel : JSONModel

@property (nonatomic) int code;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) id<Optional> data;

- (void).cxx_destruct;

@end
