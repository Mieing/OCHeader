@class NSString;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMMyGroupContainerContext : NSObject <AWEIMMyGroupContainerContextProtocol>

@property (nonatomic) unsigned long long scene;
@property (nonatomic) long long ignoreCancelActionCount;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (copy, nonatomic) id /* block */ containerHeightUpdater;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareSelectionContext;
- (void).cxx_destruct;

@end
