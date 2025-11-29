@class NSMutableDictionary, NSDictionary, AWEEnterpriseIMMessageModel, NSString;

@interface AWEEnterpriseIMMessageCardBaseViewModel : NSObject <AWEEnterpriseIMMessageViewModelProtocol>

@property (copy, nonatomic) NSDictionary *imMessageDict;
@property (retain, nonatomic) AWEEnterpriseIMMessageModel *imMessageModel;
@property (retain, nonatomic) NSMutableDictionary *localExtDict;
@property (retain, nonatomic) NSMutableDictionary *syncExtDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
