@class NSArray, NSString, WCFinderGeneralExtConfigModel;

@interface WCFinderGeneralJumpToastConfig : NSObject

@property (retain, nonatomic) NSArray *buttonContentArray;
@property (retain, nonatomic) NSArray *buttonArray;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *cancel;
@property (copy, nonatomic) NSString *confirm;
@property (retain, nonatomic) WCFinderGeneralExtConfigModel *extConfig;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
