@class NSString;

@interface AWENovelCommentTopBarModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *bookId;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *popupData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
