@class NSString;

@interface AWEKnowledgeBaseStateHandler : NSObject <AWEKnowledgeStateHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerAction:(id)a0 withParam:(id)a1 atCard:(id)a2 completion:(id /* block */)a3;


@end
