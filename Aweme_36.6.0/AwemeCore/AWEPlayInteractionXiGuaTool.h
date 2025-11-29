@class NSString;

@interface AWEPlayInteractionXiGuaTool : NSObject <AWEPlayInteractionXiGuaToolProtocol>

@property (class, readonly, nonatomic) BOOL enableXiguaRelatedBar;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasXiguaRelatedBarInModel:(id)a0;
+ (BOOL)validXiguaCommonBarInModel:(id)a0 barModel:(id)a1;


@end
