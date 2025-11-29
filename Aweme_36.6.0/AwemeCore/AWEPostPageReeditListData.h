@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageReeditListData : NSObject <AWEPostPageListDataTemplate>

@property (weak, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (Class)aACCMidVideoCreationProtocolClass;

- (id)aAWEStudioPublishAwemeAdapter;
- (void)bindServices:(id)a0;
- (id)aACCMidVideoCreationProtocol;
- (void)configSection:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)listData;

@end
