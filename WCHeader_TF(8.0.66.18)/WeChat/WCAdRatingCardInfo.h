@class NSString, NSArray;

@interface WCAdRatingCardInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *headTitle;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSArray *tagList;
@property (retain, nonatomic) NSArray *tagWithIconList;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
