@class NSString, NSArray, NSDictionary;

@interface IESECTabKitAnniePreProcessReq : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSArray *globalPropsBlockList;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (nonatomic) unsigned long long kernalType;
@property (nonatomic) BOOL enableAnnieXPreCreate;

- (void).cxx_destruct;

@end
