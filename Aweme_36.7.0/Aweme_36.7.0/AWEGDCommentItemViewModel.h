@class NSString, NSArray;

@interface AWEGDCommentItemViewModel : NSObject

@property (copy, nonatomic) NSString *userNick;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *userLevel;
@property (copy, nonatomic) NSString *userScore;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *imageList;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *uid;

- (void).cxx_destruct;

@end
