@class NSString;

@interface WAProfileRequestParameter : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *pagePath;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *recommendDishBuffer;

- (void).cxx_destruct;

@end
