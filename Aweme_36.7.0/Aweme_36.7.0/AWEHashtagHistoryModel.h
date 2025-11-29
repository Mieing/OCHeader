@class NSString, NSNumber;

@interface AWEHashtagHistoryModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *hashtagName;
@property (retain, nonatomic) NSNumber *isPrivate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
