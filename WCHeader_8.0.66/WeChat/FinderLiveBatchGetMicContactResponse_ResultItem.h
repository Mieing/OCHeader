@class NSString, FinderLiveContact;

@interface FinderLiveBatchGetMicContactResponse_ResultItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *referMicUsername;
@property (retain, nonatomic) NSString *referSessionId;
@property (retain, nonatomic) NSString *referApplyId;
@property (retain, nonatomic) FinderLiveContact *micContact;

+ (void)initialize;

@end
