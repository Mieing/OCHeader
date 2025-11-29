@class NSString, NSArray;

@interface IESGCPCreateGameRoomParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL onlyCheck;
@property (copy, nonatomic) NSArray *packageNameList;
@property (copy, nonatomic) NSString *playType;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *gameName;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
