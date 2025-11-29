@class NSString, NSDictionary;

@interface BSBusinessServiceInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *serviceUrl;
@property (retain, nonatomic) NSDictionary *itemFieldDict;

+ (id)fromServerObj:(id)a0;

- (void).cxx_destruct;

@end
