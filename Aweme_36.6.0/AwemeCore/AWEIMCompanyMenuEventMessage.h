@class NSString;

@interface AWEIMCompanyMenuEventMessage : AWEIMMessage

@property (copy, nonatomic) NSString *menuKey;
@property (copy, nonatomic) NSString *eventName;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (void).cxx_destruct;

@end
