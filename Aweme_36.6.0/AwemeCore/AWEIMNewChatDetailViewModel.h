@class NSString, AWEIMNewChatDetailContext;

@interface AWEIMNewChatDetailViewModel : NSObject <AWEIMNewChatDetailViewModelProtocol>

@property (weak, nonatomic) AWEIMNewChatDetailContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSupportMediaMessageTypesWithAssociateScrollVCType:(unsigned long long)a0;

- (double)heightForChatDetailTabbarView;
- (double)heightForChatDetailHeaderView;
- (double)heightForExternalGap;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
