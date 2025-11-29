@class NSArray, NSString, AFDFriendRecommendTagRightBtnModel;

@interface AFDFriendRecommendTagModel : NSObject

@property (nonatomic) double containerWidth;
@property (copy, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSString *userNameText;
@property (copy, nonatomic) NSString *infoText;
@property (nonatomic) unsigned long long compressType;
@property (copy, nonatomic) NSString *rightIconImageName;
@property (retain, nonatomic) AFDFriendRecommendTagRightBtnModel *rightBtnModel;

- (void).cxx_destruct;

@end
