@class NSString, WCAdCardBtnInfo;

@interface WCAdSelectInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *leftBtnTitle;
@property (retain, nonatomic) NSString *rightBtnTitle;
@property (retain, nonatomic) WCAdCardBtnInfo *leftBtnClickActionInfo;
@property (retain, nonatomic) WCAdCardBtnInfo *rightBtnClickActionInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
