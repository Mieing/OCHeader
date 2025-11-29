@class NSString, AWEIMImageIronManAnchorModel, NSDictionary;
@protocol AWEIMMessageConversationProtocol;

@interface AWEIMImageIronManAnchorTransferContext : NSObject <AWEIMImageAnchorTransferContextProtocol>

@property (nonatomic) unsigned long long anchorType;
@property (nonatomic) unsigned long long clickType;
@property (retain, nonatomic) id<AWEIMMessageConversationProtocol> conversation;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *fromUid;
@property (copy, nonatomic) AWEIMImageIronManAnchorModel *anchorModel;
@property (copy, nonatomic) NSDictionary *commonIMParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
