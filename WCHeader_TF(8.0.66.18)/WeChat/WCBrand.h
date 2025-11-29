@protocol IWCBrand;

@interface WCBrand : NSObject

@property (class, retain, nonatomic) id<IWCBrand> externalIMP;

@end
