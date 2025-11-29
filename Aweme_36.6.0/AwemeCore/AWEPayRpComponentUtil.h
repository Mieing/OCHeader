@class NSString;

@interface AWEPayRpComponentUtil : HTSService <AWEPayRpComponentUtil>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)groupTypeWithConversationId:(id)a0;
- (void)trackShow:(id)a0 extra:(id)a1;
- (void)trackIMMessageClick:(id)a0 extra:(id)a1;
- (double)bubbleCornerRadius;
- (BOOL)aweim_isGroupBlockedOrCurrentUserBlocked:(id)a0;
- (BOOL)aweim_isCurrentGroupIsBanned:(id)a0;
- (void)trackEnterpriseCompanyMessage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeWithOriginCoverSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })quetoSize;
- (void)loadMessageDetailWithContext:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (double)preferredMaxBubbleWidth;

@end
