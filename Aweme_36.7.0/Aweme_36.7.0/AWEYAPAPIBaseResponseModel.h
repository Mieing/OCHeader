@class NSError, NSDictionary;

@interface AWEYAPAPIBaseResponseModel : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *data;

- (void).cxx_destruct;

@end
