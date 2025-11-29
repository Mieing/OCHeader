@class NSString;

@interface AWESearchScanResultGeneralCachalotContext : AWESearchCachalotResultContext <AWESearchScanResultGeneralCachalotContextProtocol>

@property (copy, nonatomic) NSString *searchMethod;
@property (copy, nonatomic) NSString *rawPic;
@property (copy, nonatomic) NSString *imprId;
@property (copy, nonatomic) NSString *searchId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
