@class NSString;

@interface FLTStatusActionError : NSObject

@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorDescription;

+ (id)errorWithCode:(long long)a0 description:(id)a1;

- (void).cxx_destruct;

@end
