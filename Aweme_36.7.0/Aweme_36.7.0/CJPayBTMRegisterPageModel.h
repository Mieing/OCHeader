@class NSString, NSDictionary;

@interface CJPayBTMRegisterPageModel : NSObject

@property (copy, nonatomic) NSString *pageBtm;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) BOOL manullyManageController;
@property (nonatomic) BOOL isHybridContainer;
@property (copy, nonatomic) NSDictionary *options;

- (void).cxx_destruct;

@end
