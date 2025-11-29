@class NSMutableArray;

@interface YataMTLErrorManager : NSObject

@property (class, readonly, nonatomic) NSMutableArray *recordedErrors;

+ (id)getAllErrors;
+ (void)cleanAllErrors;
+ (void)recordError:(id)a0;

@end
