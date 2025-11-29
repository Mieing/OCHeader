@class NSString, NSArray;

@interface AWEConcernRedDotExtraModel : AWEBaseApiModel

@property (nonatomic) long long count;
@property (nonatomic) long long group;
@property (copy, nonatomic) NSString *noticeName;
@property (nonatomic) long long anchorUserID;
@property (copy, nonatomic) NSString *anchorName;
@property (nonatomic) long long roomID;
@property (copy, nonatomic) NSArray *interposeRoomIDArray;
@property (copy, nonatomic) NSArray *insertAwemeIDArray;
@property (nonatomic) BOOL isLiveSpecialFollowDot;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
