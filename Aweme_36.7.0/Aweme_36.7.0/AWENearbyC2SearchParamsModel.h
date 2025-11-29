@class NSString, AWEAwemeModel;

@interface AWENearbyC2SearchParamsModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long enterType;

- (void).cxx_destruct;

@end
