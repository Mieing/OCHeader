@interface AWEMultiContentImpl.Story25PublishPlugin : NSObject <AWEPublishTaskMessage, AWEPublishMultiSplitSubTaskProtocolStatusSubscriber> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)task:(id)a0 didRemoveWithResult:(long long)a1 error:(id)a2 info:(id)a3;
- (void)publishMultiSplitSubTask:(id)a0 propertyDidChange:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
