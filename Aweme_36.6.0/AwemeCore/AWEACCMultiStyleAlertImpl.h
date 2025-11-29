@class NSString, NSMutableDictionary;
@protocol ACCMultiStyleAlertBaseParamsProtocol, ACCMultiStyleAlertProtocol;

@interface AWEACCMultiStyleAlertImpl : NSProxy <ACCMultiStyleAlertProtocol>

@property (class, readonly, nonatomic) NSMutableDictionary *alertMap;

@property (retain, nonatomic) id<ACCMultiStyleAlertProtocol> alertImpl;
@property (readonly, nonatomic) id<ACCMultiStyleAlertBaseParamsProtocol> params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
