@class NSString, NSNumber;
@protocol Optional;

@interface RTVVoipBizData : JSONModel

@property (copy, nonatomic) NSString<Optional> *source;
@property (copy, nonatomic) NSString<Optional> *invokeSource;
@property (copy, nonatomic) NSNumber<Optional> *preJoinRoom;
@property (copy, nonatomic) NSNumber<Optional> *calleePreOpenCamera;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
