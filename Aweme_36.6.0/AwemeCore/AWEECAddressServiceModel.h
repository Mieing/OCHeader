@class NSString, IESECAddressServiceModel;

@interface AWEECAddressServiceModel : NSObject <AWEECAddressServiceModelProtocol>

@property (retain, nonatomic) IESECAddressServiceModel *addrModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)toSimpleJson;
- (id)toSimpleJsonWithBizcode:(id)a0 filterList:(id)a1;
- (unsigned long long)addressListCount;
- (id)filterAddressForBizCode:(id)a0;
- (id)initWithAddressServiceModel:(id)a0;
- (void).cxx_destruct;

@end
