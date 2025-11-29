@class NSString;

@interface IESLivePinCommentParams : NSObject

@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long eventId;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *scene;

- (void).cxx_destruct;

@end
