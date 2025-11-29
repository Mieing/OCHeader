@class NSDictionary, NSSet, NSString;

@interface AWEUserProfileEventCommonParamsHandler : NSObject

@property (copy, nonatomic) NSDictionary *mxbParams;
@property (copy, nonatomic) NSSet *mbWhiteList;
@property (copy, nonatomic) NSSet *mbBlackList;
@property (nonatomic) BOOL enableMBMerge;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSSet *eventList;
@property (readonly, copy, nonatomic) NSString *eventMapJson;

- (id)eventParamsWithOriginParams:(id)a0 event:(id)a1;
- (void)p_routerParserWithSchemeRouterParamDic:(id)a0;
- (void)p_jsonParserWithEventMapJson:(id)a0;
- (id)p_eventParamsFromMxbProtocolForEvent:(id)a0;
- (id)p_eventParamsFromMapJsonForEvent:(id)a0;
- (id)initWithSchemeRouterParamDic:(id)a0;
- (id)initWithEventMapJson:(id)a0;
- (void).cxx_destruct;

@end
