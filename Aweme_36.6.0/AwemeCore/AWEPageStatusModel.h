@class NSString;

@interface AWEPageStatusModel : NSObject

@property (readonly) long long pageStatusType;
@property (readonly, copy) NSString *message;

- (id)initWithMessage:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
