@class MMUIViewController, CContact;

@interface WXKBMessageActionContext : NSObject

@property (weak, nonatomic) MMUIViewController *viewController;
@property (retain, nonatomic) CContact *contact;

- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
