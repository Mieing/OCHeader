@class NSString, NSDictionary;

@interface AWEECMultiMallEnterModel : NSObject <AWEECMultiMallEnterModelProtocol>

@property (nonatomic) long long enterType;
@property (nonatomic) long long preIndex;
@property (copy, nonatomic) NSString *preTabID;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSDictionary *normalParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterTypeDef;
- (id)visibleSource;
- (void).cxx_destruct;

@end
