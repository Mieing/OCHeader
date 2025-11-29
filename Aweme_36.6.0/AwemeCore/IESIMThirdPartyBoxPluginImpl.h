@class NSString;

@interface IESIMThirdPartyBoxPluginImpl : HTSService <IESIMThirdPartyBoxPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)calBizUnreadCountForThirdPartyConvModel:(id)a0;

@end
