@class NSString;

@interface APSBaseResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *resultCode;

- (void).cxx_destruct;

@end
