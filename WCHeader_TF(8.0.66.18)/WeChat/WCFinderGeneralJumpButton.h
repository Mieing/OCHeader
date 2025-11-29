@class NSString, WCFinderGeneralExtConfigModel;

@interface WCFinderGeneralJumpButton : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) unsigned long long buttonStyle;
@property (retain, nonatomic) WCFinderGeneralExtConfigModel *extConfig;
@property (nonatomic) int jumpType;
@property (copy, nonatomic) id /* block */ jumpNextPostAction;
@property (copy, nonatomic) id /* block */ hookWebVCBlock;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)jumpAction;
- (void).cxx_destruct;

@end
