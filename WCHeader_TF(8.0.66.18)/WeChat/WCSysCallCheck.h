@protocol IWCSysCallCheck;

@interface WCSysCallCheck : NSObject

@property (class, retain, nonatomic) id<IWCSysCallCheck> externalIMP;

@end
