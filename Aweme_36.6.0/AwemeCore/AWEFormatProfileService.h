@class NSString, AWEFormatProfileServiceSwift;

@interface AWEFormatProfileService : HTSService <AWEFormatProfileService>

@property (retain, nonatomic) AWEFormatProfileServiceSwift *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openProfileCardWithOwner:(id)a0 conversationId:(id)a1 enterSource:(unsigned long long)a2 params:(id)a3;
- (void)openProfileCardWithRoomInfo:(id)a0 conversationId:(id)a1 enterSource:(unsigned long long)a2 params:(id)a3;
- (void)openProfileCardWithOwnerUserId:(long long)a0 nickname:(id)a1 conversationId:(id)a2 enterSource:(unsigned long long)a3 params:(id)a4;
- (void)openProfileCardWithAISecUid:(id)a0 conversationId:(id)a1 enterSource:(unsigned long long)a2 params:(id)a3;
- (void)openProfileCardWithAISecUid:(id)a0 owner:(id)a1 conversationId:(id)a2 enterSource:(unsigned long long)a3 params:(id)a4;
- (void)transferToProfileCard:(id)a0 conversationId:(id)a1 enterSource:(unsigned long long)a2 params:(id)a3;
- (void)openProfileCardWithAISecUid:(id)a0 option:(unsigned long long)a1 conversationId:(id)a2 enterSource:(unsigned long long)a3 params:(id)a4;
- (BOOL)hasFormatData:(id)a0;
- (void)routeToProfileCard:(id)a0 isInFormat:(BOOL)a1 conversationId:(id)a2 routeType:(long long)a3 enterSource:(unsigned long long)a4 params:(id)a5;
- (BOOL)enableNativeProfileCard;
- (id)newProfileCardSchema:(id)a0 type:(id)a1 params:(id)a2;
- (BOOL)canShowFormat:(id)a0;
- (void).cxx_destruct;

@end
