@class NSString;

@interface IntelligentMessageError : MMObject

@property (nonatomic) BOOL isError;
@property (retain, nonatomic) NSString *desc;

- (void).cxx_destruct;

@end
