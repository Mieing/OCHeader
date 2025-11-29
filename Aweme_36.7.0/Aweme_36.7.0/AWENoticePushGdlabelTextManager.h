@class NSArray, NSString;

@interface AWENoticePushGdlabelTextManager : NSObject <AWENoticePushGdlabelTextManagerProtocol>

@property (readonly, nonatomic) NSArray *diggArray;
@property (readonly, nonatomic) NSArray *atArray;
@property (readonly, nonatomic) NSArray *commentArray;
@property (readonly, nonatomic) NSArray *fansArray;
@property (readonly, nonatomic) NSArray *fansUrgeArray;
@property (readonly, nonatomic) NSArray *opsArray;
@property (readonly, nonatomic) NSArray *generalArray;
@property (readonly, nonatomic) NSArray *sendCollectArray;
@property (readonly, nonatomic) NSArray *favoriteArray;
@property (readonly, nonatomic) NSArray *normalNoticeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionNoticePageSchema:(id)a0;
- (BOOL)isHomepageVisitorGdLabel:(id)a0;
- (BOOL)isInteractionNoticeGdLabel:(id)a0;
- (BOOL)isFansGdLabel:(id)a0;
- (BOOL)containsLabel:(id)a0;
- (BOOL)isDiggGdLabel:(id)a0;
- (BOOL)isCommentGdLabel:(id)a0;
- (BOOL)isFavoriteGdLabel:(id)a0;
- (BOOL)isAtGdLabel:(id)a0;
- (BOOL)isSendCollectGdLabel:(id)a0;
- (BOOL)isRewardGdLabel:(id)a0;
- (BOOL)isNoticeGeneralGdLabel:(id)a0;
- (id)homepageVistorArray;
- (id)interactionNoticePageForProfileVisitorSchema:(id)a0;

@end
