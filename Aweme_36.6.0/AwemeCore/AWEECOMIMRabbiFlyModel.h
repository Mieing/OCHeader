@class NSString, NSDictionary;

@interface AWEECOMIMRabbiFlyModel : NSObject <BDECRabbiFlyIModel>

@property (nonatomic) unsigned long long viewType;
@property (copy, nonatomic) NSString *templateURL;
@property (nonatomic) unsigned long long logicType;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *biz;
@property (copy, nonatomic) NSString *rawDataString;
@property (copy, nonatomic) NSDictionary *extDataDict;
@property (copy, nonatomic) NSDictionary *renderDataDict;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) id /* block */ didUpdateRenderData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
