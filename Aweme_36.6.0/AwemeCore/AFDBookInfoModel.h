@class NSString;

@interface AFDBookInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *bookCoverUrl;
@property (nonatomic) float doubanScore;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
