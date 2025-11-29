@class NSString, NSArray, HTSLiveUser;

@interface IESLiveCommentDraftModel : NSObject

@property (copy, nonatomic) NSString *commentDraft;
@property (retain, nonatomic) HTSLiveUser *referredUserDraft;
@property (copy, nonatomic) NSArray *atUserArrayDraft;

- (void).cxx_destruct;

@end
