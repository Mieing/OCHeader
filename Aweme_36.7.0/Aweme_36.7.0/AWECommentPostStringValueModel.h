@class NSString;

@interface AWECommentPostStringValueModel : NSObject <AWECommentPostValueProtocol>

@property (copy, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;

@end
