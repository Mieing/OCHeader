@class NSArray, NSDictionary, NSMutableDictionary;

@interface AWEPlayerSocketDynamicTimeoutManager : NSObject

@property (retain, nonatomic) NSArray *conditionConfigs;
@property (retain, nonatomic) NSDictionary *reflectDic;
@property (retain, nonatomic) NSMutableDictionary *speedPortraitDic;
@property (retain, nonatomic) NSMutableDictionary *blockPortraitDic;

+ (id)shareInstance;

- (id)getSocketOptions;
- (id)getBlockOptions;
- (BOOL)hasGetPortraits;
- (void)parseSocketTimeoutInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
