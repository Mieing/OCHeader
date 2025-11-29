@class NSString, AWEVideoPublishViewModel;

@interface AWEJSEditorContextImpl : NSObject <AWEJSEditorContextProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
