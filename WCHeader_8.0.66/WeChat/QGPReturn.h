@class NSString;

@interface QGPReturn : QGPBaseModel

@property (retain, nonatomic) NSString *status;

+ (id)successWithoutReturn;

- (id)init;
- (void).cxx_destruct;

@end
