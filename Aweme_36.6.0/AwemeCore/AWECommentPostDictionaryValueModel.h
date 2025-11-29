@class NSDictionary, NSString;

@interface AWECommentPostDictionaryValueModel : NSObject <AWECommentPostValueProtocol>

@property (copy, nonatomic) NSDictionary *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionaryValue:(id)a0;
- (void).cxx_destruct;

@end
