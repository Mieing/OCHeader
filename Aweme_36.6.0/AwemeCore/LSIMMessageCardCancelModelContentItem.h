@class NSString;

@interface LSIMMessageCardCancelModelContentItem : NSObject

@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
