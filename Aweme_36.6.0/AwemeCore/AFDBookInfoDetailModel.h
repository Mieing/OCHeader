@class NSNumber, NSString;

@interface AFDBookInfoDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *bookID;
@property (copy, nonatomic) NSString *bookCover;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *bookDesc;
@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSString *msgContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
