@class NSString, NSArray;

@interface AWEECOMIMFootDescMsgSourceLabelModel : NSObject

@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *placeHolderList;

+ (unsigned long long)typeWithBizType:(id)a0;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
