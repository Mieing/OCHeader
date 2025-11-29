@class NSString, HTSLiveUser;

@interface IESLiveAssociateHeadVideoSelectModel : NSObject

@property (nonatomic) long long likeCount;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) HTSLiveUser *author;

- (void).cxx_destruct;

@end
