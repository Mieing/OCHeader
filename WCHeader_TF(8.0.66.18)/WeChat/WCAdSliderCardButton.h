@class NSString, WCAdCardBtnInfo;

@interface WCAdSliderCardButton : NSObject <NSCoding>

@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
