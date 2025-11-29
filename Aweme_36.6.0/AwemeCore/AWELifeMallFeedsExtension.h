@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface AWELifeMallFeedsExtension : NSObject <DitoExtensionProtocol>

@property (copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonRequestParamsFromSource:(id)a0 pageContext:(id)a1;

@end
