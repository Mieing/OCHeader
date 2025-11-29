@class NSString, AWEAwemeModel, NSNumber, AWEUserModel;

@interface AWEIMPolymerizationDiggModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSString *tagText;
@property (nonatomic) BOOL isOnline;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
