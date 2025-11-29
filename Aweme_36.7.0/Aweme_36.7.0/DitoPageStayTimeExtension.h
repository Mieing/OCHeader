@class NSString, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoPageStayTimeExtension : NSObject <DitoExtensionProtocol>

@property (nonatomic) long long beginTS;
@property (copy, nonatomic) NSString *pageStatus;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
