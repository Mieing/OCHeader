@interface GetSelfFinderContactStatusResp : WXPBGeneratedMessage

@property (nonatomic) BOOL canCreateContact;
@property (nonatomic) BOOL havaFinderContact;
@property (nonatomic) BOOL isBlock;
@property (nonatomic) BOOL isSilent;
@property (nonatomic) BOOL canPost;
@property (nonatomic) BOOL unAuthFinderInfo;

+ (void)initialize;

@end
