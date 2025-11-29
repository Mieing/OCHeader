@class NSString;

@interface AWEACCCutSameImpl : NSObject <ACCCutSameProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cutSameViewControllerWithTemplateModel:(id)a0 inputData:(id)a1 dismiss:(id /* block */)a2;

@end
