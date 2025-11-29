@class NSString, NSDictionary;

@interface AWEBTMRegisterPageModel : NSObject

@property (copy, nonatomic) NSString *pageBtm;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) BOOL manullyManageController;
@property (nonatomic) BOOL isHybridContainer;
@property (retain, nonatomic) NSDictionary *options;

- (void).cxx_destruct;

@end
