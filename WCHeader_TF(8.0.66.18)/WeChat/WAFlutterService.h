@protocol IWAFlutterService;

@interface WAFlutterService : NSObject

@property (class, retain, nonatomic) Class externalIMP;
@property (class, readonly, nonatomic) id<IWAFlutterService> sharedService;

+ (BOOL)isSupportFlutter;

@end
