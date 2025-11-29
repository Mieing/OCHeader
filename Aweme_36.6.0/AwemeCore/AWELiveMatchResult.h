@class NSString;

@interface AWELiveMatchResult : NSObject <IESLiveMatchResult>

@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) unsigned long long userId;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *account;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (nonatomic) unsigned long long hitType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
