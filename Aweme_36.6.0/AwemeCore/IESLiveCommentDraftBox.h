@class NSString, NSMutableDictionary;

@interface IESLiveCommentDraftBox : NSObject <IESLiveCommentDraftService>

@property (retain, nonatomic) NSMutableDictionary *cacheDraft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)commentDraftFromSource:(long long)a0;
- (void)clearCommentDraftForSource:(long long)a0;
- (id)generateDraftModel;
- (void).cxx_destruct;
- (id)init;

@end
