@class NSString, NSArray;

@interface WCAdRollInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSArray *textList;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
