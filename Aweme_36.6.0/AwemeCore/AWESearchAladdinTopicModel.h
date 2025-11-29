@class NSString, NSNumber;

@interface AWESearchAladdinTopicModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *awemeIDList;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *videoCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
