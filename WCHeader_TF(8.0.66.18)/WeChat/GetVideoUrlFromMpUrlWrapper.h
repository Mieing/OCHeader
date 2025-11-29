@class NSString;

@interface GetVideoUrlFromMpUrlWrapper : MMObject

@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
