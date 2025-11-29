@class NSString;

@interface FinderHelpPromotionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) BOOL unpublicized;
@property (nonatomic) BOOL isCurrentUser;

+ (void)initialize;

- (void)setIsCurrentUser:(BOOL)a0;
- (BOOL)isCurrentUser;
- (void)setUnpublicized:(BOOL)a0;
- (BOOL)unpublicized;
- (void)setNickName:(id)a0;
- (id)nickName;
- (void)setImageUrl:(id)a0;
- (id)imageUrl;

@end
