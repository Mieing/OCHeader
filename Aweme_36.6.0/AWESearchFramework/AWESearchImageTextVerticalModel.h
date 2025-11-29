@class NSString, NSArray;

@interface AWESearchImageTextVerticalModel : AWESearchBusinessContainerNormalBaseModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *imageURLList;
@property (retain, nonatomic) NSArray *avatarImageURLList;
@property (retain, nonatomic) NSString *authorName;
@property (nonatomic) BOOL like;
@property (retain, nonatomic) NSString *likeNumber;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic) double width;
@property (nonatomic) double height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
