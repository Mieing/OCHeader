@class NSString;

@interface AWEIMActiveGroupToastModel : NSObject

@property (copy, nonatomic) NSString *activeStatusZhStringDefault;
@property (copy, nonatomic) NSString *activeStatusZhStringShare;

- (void)useSelfToastStringToUpdateToastModel:(id)a0;
- (id)getCurrentActiveStatusStringShare;
- (id)getCurrentActiveStatusStringDefault;
- (void).cxx_destruct;

@end
