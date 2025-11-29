@class NSString, NSMutableAttributedString;

@interface AWELiveStatusInfoModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *profileURL;
@property (retain, nonatomic) NSMutableAttributedString *originalString;
@property (retain, nonatomic) NSMutableAttributedString *completeString;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
