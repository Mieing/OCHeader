@class NSString;

@interface MMLiveViewControllerLoadIndicatorOptions : NSObject

@property (retain, nonatomic) NSString *message;
@property (nonatomic) double delay;
@property (nonatomic) BOOL blocking;
@property (nonatomic) BOOL showResultOnSuccess;
@property (nonatomic) BOOL showResultOnFault;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
