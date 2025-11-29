@class NSString, NSArray, NSNumber;

@interface IESECCommentKOLEvaluationModel : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *coverURLList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSNumber *videoDuration;
@property (nonatomic, getter=isLiked) BOOL liked;
@property (nonatomic) long long numberOfLikes;
@property (nonatomic) long long sourceType;

- (void).cxx_destruct;

@end
